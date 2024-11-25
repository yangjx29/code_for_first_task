float tgWF9QiuR7 (int GFxkRZs4DP8) {
    {
        if ((565 - 565)) {
            return (260 - 260);
        }
    }
    if ((511 - 421) <= GFxkRZs4DP8 &&GFxkRZs4DP8 <= (480 - 380))
        return (961.0 - 957.0);
    else if ((769 - 684) <= GFxkRZs4DP8 &&(780 - 691) >= GFxkRZs4DP8)
        return (750.7 - 747.0);
    else if ((735 - 653) <= GFxkRZs4DP8 &&(828 - 744) >= GFxkRZs4DP8)
        return (124.3 - 121.0);
    else if (GFxkRZs4DP8 >= (753 - 675) && (106 - 25) >= GFxkRZs4DP8)
        return (430.0 - 427.0);
    else if ((274 - 199) <= GFxkRZs4DP8 &&GFxkRZs4DP8 <= (219 - 142))
        return (631.7 - 629.0);
    else if ((611 - 539) <= GFxkRZs4DP8 &&(396 - 322) >= GFxkRZs4DP8)
        return (179.3 - 177.0);
    else if (GFxkRZs4DP8 >= (1068 - 1000) && GFxkRZs4DP8 <= (148 - 77))
        return (702.0 - 700.0);
    else if (GFxkRZs4DP8 >= (393 - 329) && GFxkRZs4DP8 <= (491 - 424))
        return (476.5 - 475.0);
    else if (GFxkRZs4DP8 >= (147 - 87) && GFxkRZs4DP8 <= (213 - 150))
        return (618.0 - 617.0);
    else
        return (834 - 834);
}

void  main () {
    float sEUmk60i9I = (878 - 878);
    int GrEP84X, qMhPS9U6tZD, avtLWeA = (775 - 775);
    int *DLIqdQFKBwgC, *vZoRGLK;
    scanf ("%d", &GrEP84X);
    DLIqdQFKBwgC = (int *) malloc (sizeof (int) * GrEP84X);
    vZoRGLK = (int *) malloc (sizeof (int) * GrEP84X);
    for (qMhPS9U6tZD = (626 - 626); qMhPS9U6tZD < GrEP84X; qMhPS9U6tZD = qMhPS9U6tZD + (724 - 723)) {
        scanf ("%d", &DLIqdQFKBwgC[qMhPS9U6tZD]);
    }
    for (qMhPS9U6tZD = (618 - 618); qMhPS9U6tZD < GrEP84X; qMhPS9U6tZD = qMhPS9U6tZD + (53 - 52)) {
        scanf ("%d", &vZoRGLK[qMhPS9U6tZD]);
    }
    for (qMhPS9U6tZD = (548 - 548); qMhPS9U6tZD < GrEP84X; qMhPS9U6tZD = qMhPS9U6tZD + 1) {
        sEUmk60i9I = sEUmk60i9I + DLIqdQFKBwgC[qMhPS9U6tZD] * tgWF9QiuR7 (vZoRGLK[qMhPS9U6tZD]);
        avtLWeA += DLIqdQFKBwgC[qMhPS9U6tZD];
    }
    printf ("%3.2f", sEUmk60i9I / avtLWeA);
}

