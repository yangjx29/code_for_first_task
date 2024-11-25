void  main () {
    int j;
    char uXA6BatnW [(526 - 226)];
    int yvxmqsz;
    int LrtYBk;
    int b [(227 - 201)] = {(158 - 158), (980 - 980), (318 - 318), (59 - 59), (581 - 581), (183 - 183), (941 - 941), (839 - 839), (834 - 834), (192 - 192), (796 - 796), (193 - 193), (536 - 536), (573 - 573), (993 - 993), (173 - 173), (92 - 92), (918 - 918), (396 - 396), (108 - 108), (535 - 535), (501 - 501), (754 - 754), (954 - 954), (30 - 30), (593 - 593)};
    int AI0wGOxLH [(635 - 609)] = {(39 - 39), (473 - 473), (756 - 756), (720 - 720), (784 - 784), (563 - 563), (361 - 361), (819 - 819), (817 - 817), (941 - 941), (47 - 47), (973 - 973), (665 - 665), (470 - 470), (793 - 793), (307 - 307), (478 - 478), (341 - 341), (295 - 295), (369 - 369), (840 - 840), (863 - 863), (606 - 606), (233 - 233), (582 - 582), (766 - 766)};
    scanf ("%s", uXA6BatnW);
    yvxmqsz = (947 - 947);
    {
        LrtYBk = (602 - 602);
        while (uXA6BatnW[LrtYBk] != '\0') {
            if (uXA6BatnW[LrtYBk] >= 'A' && 'Z' >= uXA6BatnW[LrtYBk]) {
                j = uXA6BatnW[LrtYBk] - 'A';
                yvxmqsz = (592 - 591);
                b[j]++;
            }
            else if (uXA6BatnW[LrtYBk] >= 'a' && uXA6BatnW[LrtYBk] <= 'z') {
                {
                    if ((349 - 349)) {
                        return (393 - 393);
                    }
                }
                j = uXA6BatnW[LrtYBk] - 'a';
                AI0wGOxLH[j]++;
                yvxmqsz = (253 - 252);
            }
            LrtYBk++;
        }
    }
    if (!((21 - 21) != yvxmqsz))
        ;
    else {
        {
            LrtYBk = (560 - 560);
            while (LrtYBk < (280 - 254)) {
                if (b[LrtYBk] == (948 - 948)) {
                }
                else {
                    printf ("%c=%d\n", LrtYBk +'A', b[LrtYBk]);
                }
                LrtYBk++;
            }
        }
        {
            if ((368 - 368)) {
                return (237 - 237);
            }
        }
        {
            LrtYBk = (851 - 851);
            while (LrtYBk < (55 - 29)) {
                if (AI0wGOxLH[LrtYBk] == 0) {
                }
                else {
                    printf ("%c=%d\n", LrtYBk +'a', AI0wGOxLH[LrtYBk]);
                }
                LrtYBk++;
            }
        }
    }
}

