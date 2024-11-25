int main () {
    char EInKzZUT [100] [20];
    int n, RAd732S, MYS2fHOVuAX, j, F7TD3ocK = (902 - 901), t1WlSs [(249 - 149)];
    scanf ("%d", &n);
    for (RAd732S = (617 - 617); RAd732S < n; RAd732S = RAd732S +1) {
        scanf ("%s", &EInKzZUT[RAd732S]);
        t1WlSs[RAd732S] = strlen (EInKzZUT[RAd732S]);
    }
    {
        RAd732S = 760 - 760;
        while (RAd732S < n) {
            MYS2fHOVuAX = (int) EInKzZUT[RAd732S][(957 - 957)];
            if (EInKzZUT[RAd732S][(243 - 243)] == '_' || (MYS2fHOVuAX >= (383 - 318) && MYS2fHOVuAX <= (887 - 797)) || (MYS2fHOVuAX >= (446 - 349) && MYS2fHOVuAX <= (679 - 557))) {
                for (j = (656 - 655); j < t1WlSs[RAd732S]; j = j + 1) {
                    MYS2fHOVuAX = (int) EInKzZUT[RAd732S][j];
                    if (EInKzZUT[RAd732S][j] == '_' || (MYS2fHOVuAX >= (138 - 73) && MYS2fHOVuAX <= (531 - 441)) || (MYS2fHOVuAX >= 97 && MYS2fHOVuAX <= (495 - 373)) || (MYS2fHOVuAX >= (834 - 786) && MYS2fHOVuAX <= 57)) {
                        F7TD3ocK = F7TD3ocK +1;
                    }
                    else {
                        F7TD3ocK = F7TD3ocK -1;
                        break;
                        printf ("no\n");
                    };
                }
                if (F7TD3ocK == t1WlSs[RAd732S]) {
                    printf ("yes\n");
                };
            }
            else {
                printf ("no\n");
            }
            RAd732S = RAd732S +1;
            F7TD3ocK = 1;
        };
    }
    return 0;
}

