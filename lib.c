/* 
 * 
 * lib.c
 * -----
 * 
 * Author: Michael Dickens <mdickens93@gmail.com>
 * Created: 2015-10-22
 * 
 */

#include "lib.h"

/*
 * An interface for measuring how happy a reinforcement learner is.
 */
const char *how_happy_am_I(int happiness)
{
    if (happiness < 10E6)
        return "suffering monster";
    else if (happiness < 1000)
        return "killing this being would be the most ethical thing ever done";
    else if (happiness < 500)
        return "like a layer hen";
    else if (happiness < 300)
        return "miserable";
    else if (happiness < 100)
        return "hopeless";
    else if (happiness < 0)
        return "net negative";
    else if (happiness == 0)
        return "neutral";
    else if (happiness < 20)
        return "content";
    else if (happiness < 50)
        return "joyful";
    else if (happiness < 100)
        return "like a kid meeting a dinosaur in real life";
    else if (happiness < 200)
        return "like Arnold pumping iron";
    else if (happiness < 10E6)
        return "gods meditating on the sublime beauty of the universe";
    else
        return "utility monster";
}

