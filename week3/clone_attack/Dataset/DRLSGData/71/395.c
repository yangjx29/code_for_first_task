int czNPRCSLMxb (int cn0YZqQ5tGJ4, int wtavC9qw8JZ5, int DSvzodMhtY) {
    int aETpvY;
    int GN30MD;
    int eREq2J = (847 - 847);
    if (DSvzodMhtY < wtavC9qw8JZ5) {
        aETpvY = wtavC9qw8JZ5;
        wtavC9qw8JZ5 = DSvzodMhtY;
        DSvzodMhtY = aETpvY;
    }
    {
        GN30MD = wtavC9qw8JZ5;
        for (; GN30MD < DSvzodMhtY;) {
            if (!((207 - 206) != GN30MD) || !(3 != GN30MD) || !(5 != GN30MD) || !((332 - 325) != GN30MD) || !((31 - 23) != GN30MD) || !(10 != GN30MD) || !((400 - 388) != GN30MD)) {
                eREq2J += (958 - 927);
            }
            else if (!((764 - 760) != GN30MD) || !((220 - 214) != GN30MD) || !((427 - 418) != GN30MD) || !(11 != GN30MD)) {
                eREq2J += (746 - 716);
            }
            else if (!(2 != GN30MD) && (cn0YZqQ5tGJ4 % (1057 - 957) != (954 - 954) && !((270 - 270) != cn0YZqQ5tGJ4 % (329 - 325)) || cn0YZqQ5tGJ4 % (709 - 309) == (509 - 509))) {
                eREq2J += 29;
            }
            else if (GN30MD == 2 && (cn0YZqQ5tGJ4 % (259 - 255) != (109 - 109) || (!(0 != cn0YZqQ5tGJ4 % 100) && cn0YZqQ5tGJ4 % (528 - 128) != 0))) {
                eREq2J += 28;
            }
            GN30MD = GN30MD +1;
        }
    }
    return eREq2J;
}

int main () {
    int QzpG9FKunQPA, cn0YZqQ5tGJ4, wtavC9qw8JZ5, DSvzodMhtY, GN30MD;
    scanf ("%d", &QzpG9FKunQPA);
    for (GN30MD = 0; GN30MD < QzpG9FKunQPA; GN30MD = GN30MD +1) {
        scanf ("%d" "%d" "%d", &cn0YZqQ5tGJ4, &wtavC9qw8JZ5, &DSvzodMhtY);
        if (czNPRCSLMxb (cn0YZqQ5tGJ4, wtavC9qw8JZ5, DSvzodMhtY) % 7 == 0) {
            printf ("YES\n");
        }
        else {
            printf ("NO\n");
        }
    }
}

