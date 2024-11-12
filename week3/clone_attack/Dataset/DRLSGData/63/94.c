int main () {
    int DWE9P2MSjzQJ [(261 - 161)] [(1076 - 976)];
    int SnMyEs6c [(882 - 782)] [(990 - 890)];
    int btG13F0DEus [(1057 - 957)] [(546 - 446)];
    int QDupzVGK3cC;
    int ep5qsE;
    int SjRxDd;
    int x1;
    int Muo0BYzi;
    int UcrC0KkTQN;
    int AvCLaQcMyZ7;
    scanf ("%d%d", &x1, &Muo0BYzi);
    for (QDupzVGK3cC = (168 - 168); x1 > QDupzVGK3cC; QDupzVGK3cC++) {
        for (ep5qsE = (1000 - 1000); Muo0BYzi > ep5qsE; ep5qsE++) {
            scanf ("%d", &DWE9P2MSjzQJ[QDupzVGK3cC][ep5qsE]);
        }
    }
    scanf ("%d%d", &UcrC0KkTQN, &AvCLaQcMyZ7);
    for (QDupzVGK3cC = (286 - 286); UcrC0KkTQN > QDupzVGK3cC; QDupzVGK3cC++) {
        for (ep5qsE = (60 - 60); AvCLaQcMyZ7 > ep5qsE; ep5qsE++) {
            scanf ("%d", &SnMyEs6c[QDupzVGK3cC][ep5qsE]);
        }
    }
    for (QDupzVGK3cC = (364 - 364); x1 > QDupzVGK3cC; QDupzVGK3cC++) {
        for (ep5qsE = (782 - 782); AvCLaQcMyZ7 > ep5qsE; ep5qsE++) {
            btG13F0DEus[QDupzVGK3cC][ep5qsE] = (424 - 424);
        }
    }
    for (QDupzVGK3cC = (701 - 701); QDupzVGK3cC < x1; QDupzVGK3cC++) {
        for (ep5qsE = (916 - 916); AvCLaQcMyZ7 > ep5qsE; ep5qsE++) {
            for (SjRxDd = (261 - 261); Muo0BYzi > SjRxDd; SjRxDd++) {
                btG13F0DEus[QDupzVGK3cC][ep5qsE] = btG13F0DEus[QDupzVGK3cC][ep5qsE] + DWE9P2MSjzQJ[QDupzVGK3cC][SjRxDd] * SnMyEs6c[SjRxDd][ep5qsE];
            }
        }
    }
    for (QDupzVGK3cC = (703 - 703); QDupzVGK3cC < x1; QDupzVGK3cC++) {
        for (ep5qsE = (459 - 459); ep5qsE < AvCLaQcMyZ7; ep5qsE++) {
            if (!((31 - 31) != ep5qsE) && !((198 - 197) != AvCLaQcMyZ7)) {
                printf ("%d\n", btG13F0DEus[QDupzVGK3cC][ep5qsE]);
            }
            else if (ep5qsE == 0) {
                printf ("%d", btG13F0DEus[QDupzVGK3cC][ep5qsE]);
            }
            else if (ep5qsE < (AvCLaQcMyZ7 -(845 - 844))) {
                printf (" %d", btG13F0DEus[QDupzVGK3cC][ep5qsE]);
            }
            else if (QDupzVGK3cC < (x1 - (267 - 266))) {
                printf (" %d\n", btG13F0DEus[QDupzVGK3cC][ep5qsE]);
            }
            else {
                printf (" %d", btG13F0DEus[QDupzVGK3cC][ep5qsE]);
            }
        }
    }
}

