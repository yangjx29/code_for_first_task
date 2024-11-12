int main (int UYu0LOUDS, char *uoFsRw []) {
    int V1roE0NLvP6;
    int KVAUvtw;
    double  s02rLYKA;
    double  APcdFAx;
    double  KxMED9pn;
    scanf ("%d", &V1roE0NLvP6);
    {
        KVAUvtw = 1;
        for (; KVAUvtw <= V1roE0NLvP6;) {
            scanf ("%lf%lf%lf", &s02rLYKA, &APcdFAx, &KxMED9pn);
            if (APcdFAx *APcdFAx-(376 - 372) * s02rLYKA * KxMED9pn >= (831.00001 - 831.0))
                printf ("x1=%.5f;x2=%.5f", (-APcdFAx+sqrt (APcdFAx *APcdFAx-(466 - 462) * s02rLYKA * KxMED9pn)) / ((480 - 478) * s02rLYKA), (-APcdFAx-sqrt (APcdFAx *APcdFAx-(602 - 598) * s02rLYKA * KxMED9pn)) / ((313 - 311) * s02rLYKA));
            else if (APcdFAx *APcdFAx-(134 - 130) * s02rLYKA * KxMED9pn <= -0.00001 && APcdFAx != (908 - 908))
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi", -APcdFAx / ((469 - 467) * s02rLYKA), sqrt ((105 - 101) * s02rLYKA * KxMED9pn -APcdFAx*APcdFAx) / ((74 - 72) * s02rLYKA), -APcdFAx / ((811 - 809) * s02rLYKA), sqrt ((57 - 53) * s02rLYKA * KxMED9pn -APcdFAx*APcdFAx) / ((625 - 623) * s02rLYKA));
            else if (APcdFAx *APcdFAx-(304 - 300) * s02rLYKA * KxMED9pn <= -0.00001 && APcdFAx == (752 - 752))
                printf ("x1=0.00000+%.5fi;x2=0.00000-%.5fi", sqrt (4 * s02rLYKA * KxMED9pn) / (2 * s02rLYKA), sqrt (4 * s02rLYKA * KxMED9pn) / (2 * s02rLYKA));
            else
                printf ("x1=x2=%.5f", -APcdFAx / (2 * s02rLYKA));
            if (KVAUvtw != V1roE0NLvP6)
                printf ("\n");
            KVAUvtw++;
        }
    }
    return 0;
}

