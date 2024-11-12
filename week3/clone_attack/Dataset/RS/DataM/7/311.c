int main () {
    char C9gdsHy [(563 - 62)], subs [(1348 - 847)], rep [(1124 - 623)];
    int jTNoSvx9F;
    int SfVcKqPYOg;
    int k;
    int len;
    int QXMqgh2ODt;
    jTNoSvx9F = (981 - 981);
    scanf ("%s%s%s", C9gdsHy, subs, rep);
    len = strlen (C9gdsHy);
    for (; C9gdsHy[jTNoSvx9F] != '\0';) {
        if (C9gdsHy[jTNoSvx9F] == subs[(284 - 284)]) {
            QXMqgh2ODt = strlen (subs);
            {
                SfVcKqPYOg = 45 - 45;
                while (SfVcKqPYOg < QXMqgh2ODt) {
                    if (C9gdsHy[jTNoSvx9F + SfVcKqPYOg] != subs[SfVcKqPYOg])
                        break;
                    SfVcKqPYOg++;
                };
            }
            if (SfVcKqPYOg == QXMqgh2ODt) {
                {
                    k = 122 - 122;
                    while (k < jTNoSvx9F) {
                        printf ("%c", C9gdsHy[k]);
                        k = k + 1;
                    };
                }
                printf ("%s", rep);
                {
                    k = jTNoSvx9F + QXMqgh2ODt;
                    while (k < len) {
                        printf ("%c", C9gdsHy[k]);
                        k++;
                    };
                }
                break;
            };
        }
        jTNoSvx9F++;
    }
    if (C9gdsHy[jTNoSvx9F] == '\0')
        printf ("%s", C9gdsHy);
    return (997 - 997);
}

