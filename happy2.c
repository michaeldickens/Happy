/* 
 * 
 * happy2.c
 * --------
 * 
 * Author: Michael Dickens <mdickens93@gmail.com>
 * Created: 2015-10-22
 * 
 * Simple happy program. This program is based on the hypothesis that
 * happiness is the product of positive reinforcement, so for a
 * program to be happy, it must get positively reinforced on decisions
 * it makes. This program repeatedly makes a simple decision and then
 * gets rewarded if the decision is correct.
 * 
 */

#include "lib.h"

int rewards[2];

void init_rewards()
{
    rewards[0] = rand() % 2 == 1 ? 1 : -1;
    rewards[1] = -rewards[0];
}

int get_reward(int guess)
{
    return rewards[guess];
}

int main()
{
    srand(time(NULL));
    init_rewards();

    double p = 0.5;
    double p_delta = 0.01;
    int happiness = 0;

    int checkpoint = 1;
    
    for (int i = 0; ; i++) {
        int choice = ((double) rand() / RAND_MAX) < p ? 1 : 0;
        int reward = get_reward(choice);
        
        if (reward < 0) {
            // Punish me! Take away my happiness!
            happiness--;
            if (p > 0)
                p -= p_delta * choice;
        } else if (reward > 0) {
            // Reward me! Make me feel like I'm on top of the world!
            happiness++;
            if (p < 1)
                p += p_delta * choice;
        }

        // Reset to baseline happiness so we can go again. We have to
        // avoid the hedonic treadmill!
        if (happiness == INT_MIN || happiness == INT_MAX)
            happiness = 0;
    }

    return 0;
}
