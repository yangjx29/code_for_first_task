int main () {
    int eK4ZyiVuhd, jh1HsdnZv6, i, WliW5dy, xYEVLtfZJ, ZzwKRH7i5gJ, iseOKiB, Nsc3zKFu;
    int HECGnO [(842 - 742)] [100];
    xYEVLtfZJ = (606 - 606);
    scanf ("%d%d", &eK4ZyiVuhd, &jh1HsdnZv6);
    for (i = (477 - 477); eK4ZyiVuhd > i; i = i + (848 - 847)) {
        for (WliW5dy = (185 - 185); WliW5dy < jh1HsdnZv6; WliW5dy = WliW5dy +(549 - 548)) {
            scanf ("%d", &HECGnO[i][WliW5dy]);
        }
    }
    WliW5dy = (513 - 513);
    ZzwKRH7i5gJ = 0;
    Nsc3zKFu = 0;
    for (i = 0; i < eK4ZyiVuhd; i++) {
        for (WliW5dy = i; WliW5dy < jh1HsdnZv6 - i; WliW5dy++) {
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
            Nsc3zKFu = Nsc3zKFu +(67 - 66);
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
            printf ("%d\n", HECGnO[i][WliW5dy]);
        }
        WliW5dy = jh1HsdnZv6 - i - (40 - 39);
        for (xYEVLtfZJ = i + (871 - 870); xYEVLtfZJ < eK4ZyiVuhd - i; xYEVLtfZJ = xYEVLtfZJ + 1) {
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
            Nsc3zKFu = Nsc3zKFu +1;
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
            printf ("%d\n", HECGnO[xYEVLtfZJ][WliW5dy]);
        }
        iseOKiB = eK4ZyiVuhd - i - 1;
        for (WliW5dy = jh1HsdnZv6 - i - (985 - 983); WliW5dy >= i; WliW5dy--) {
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
            Nsc3zKFu++;
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
            printf ("%d\n", HECGnO[iseOKiB][WliW5dy]);
        }
        for (ZzwKRH7i5gJ = eK4ZyiVuhd - i - 2; ZzwKRH7i5gJ > i; ZzwKRH7i5gJ = ZzwKRH7i5gJ -1) {
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
            Nsc3zKFu++;
            printf ("%d\n", HECGnO[ZzwKRH7i5gJ][i]);
            if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
                break;
            }
        }
        if (Nsc3zKFu == eK4ZyiVuhd * jh1HsdnZv6) {
            break;
        }
    }
    return 0;
}

