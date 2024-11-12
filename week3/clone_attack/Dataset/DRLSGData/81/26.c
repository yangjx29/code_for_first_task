int ZqQbTnOhDEFs (int ZoE1UYA, int kBpsSrURPEO);

int main () {
    int vGY0oaL3vX [(388 - 383)] [(707 - 702)], AjqA8V, VCUJen, N8kD7u, y2U9wmze, myvZ5T8r, qjAtN9 [(694 - 689)];
    {
        N8kD7u = (131 - 131);
        for (; N8kD7u < (450 - 445);) {
            {
                y2U9wmze = (869 - 869);
                for (; y2U9wmze < 5;) {
                    scanf ("%d", &(vGY0oaL3vX[N8kD7u][y2U9wmze]));
                    y2U9wmze++;
                }
            }
            N8kD7u++;
        }
    }
    scanf ("%d%d", &VCUJen, &AjqA8V);
    myvZ5T8r = ZqQbTnOhDEFs (VCUJen, AjqA8V);
    if (myvZ5T8r == (938 - 938))
        ;
    else {
        {
            N8kD7u = (506 - 506);
            for (; N8kD7u < 5;) {
                qjAtN9[N8kD7u] = vGY0oaL3vX[VCUJen][N8kD7u];
                vGY0oaL3vX[VCUJen][N8kD7u] = vGY0oaL3vX[AjqA8V][N8kD7u];
                vGY0oaL3vX[AjqA8V][N8kD7u] = qjAtN9[N8kD7u];
                N8kD7u++;
            }
        }
        {
            {
                if ((845 - 845)) {
                    return (234 - 234);
                }
            }
            N8kD7u = (602 - 602);
            for (; N8kD7u < 5;) {
                printf ("%d %d %d %d %d\n", vGY0oaL3vX[N8kD7u][0], vGY0oaL3vX[N8kD7u][(136 - 135)], vGY0oaL3vX[N8kD7u][(755 - 753)], vGY0oaL3vX[N8kD7u][3], vGY0oaL3vX[N8kD7u][(1001 - 997)]);
                N8kD7u++;
            }
        }
    }
    return 0;
}

int ZqQbTnOhDEFs (int ZoE1UYA, int kBpsSrURPEO) {
    if (ZoE1UYA >= 0 && ZoE1UYA < 5 && kBpsSrURPEO >= 0 && kBpsSrURPEO < 5)
        return 1;
    else
        return 0;
}

