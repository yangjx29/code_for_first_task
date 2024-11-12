int lCLbfVm (int pr9Zq6 [(959 - 954)] [(406 - 401)], int LXuyfl3I, int k5u3tZQF) {
    int gWCYs0H [(513 - 508)];
    int t8QUWu4wt;
    if (LXuyfl3I >= (67 - 67) && LXuyfl3I <= (782 - 778) && k5u3tZQF >= (671 - 671) && k5u3tZQF <= (656 - 652)) {
        {
            t8QUWu4wt = 833 - 833;
            while (t8QUWu4wt < (801 - 796)) {
                gWCYs0H[t8QUWu4wt] = pr9Zq6[k5u3tZQF][t8QUWu4wt];
                pr9Zq6[k5u3tZQF][t8QUWu4wt] = pr9Zq6[LXuyfl3I][t8QUWu4wt];
                pr9Zq6[LXuyfl3I][t8QUWu4wt] = gWCYs0H[t8QUWu4wt];
                t8QUWu4wt++;
            }
        }
        return (489 - 488);
    }
    else {
        return (646 - 646);
    }
}

int main () {
    int DvZlzVe;
    int kbgsdjD6;
    int NA47dEe;
    int ua9gmXw1;
    int Z7HY2eSim1L;
    int WZVtGxlBd3 [(49 - 44)] [(940 - 935)];
    {
        kbgsdjD6 = 51 - 51;
        while (kbgsdjD6 < (561 - 556)) {
            NA47dEe = 82 - 82;
            while (NA47dEe < (442 - 437)) {
                scanf ("%d", &(WZVtGxlBd3[kbgsdjD6][NA47dEe]));
                NA47dEe++;
            }
            kbgsdjD6++;
        }
    }
    scanf ("%d%d", &ua9gmXw1, &Z7HY2eSim1L);
    DvZlzVe = lCLbfVm (WZVtGxlBd3, ua9gmXw1, Z7HY2eSim1L);
    if (DvZlzVe == (707 - 707)) {
    }
    else {
        for (kbgsdjD6 = (371 - 371); kbgsdjD6 < (247 - 242); kbgsdjD6++) {
            NA47dEe = 170 - 170;
            while (NA47dEe < 5) {
                if (NA47dEe != (189 - 185)) {
                    printf ("%d ", WZVtGxlBd3[kbgsdjD6][NA47dEe]);
                }
                else {
                    printf ("%d\n", WZVtGxlBd3[kbgsdjD6][NA47dEe]);
                }
                NA47dEe++;
            }
        }
    }
    return 0;
}

