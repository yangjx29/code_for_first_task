int main () {
    char LBUPbCE8DYh [(367 - 266)];
    char rhv3HXUd [(336 - 236)];
    int zwZrzX48l;
    int NoLdScew;
    int cDqwokS;
    int WrUO4CeEcq;
    gets (LBUPbCE8DYh);
    const  int AREv0wI2SW9 = (289 - 276);
    int a;
    a = strlen (LBUPbCE8DYh);
    if (!((267 - 266) != a))
        printf ("0\n%s", LBUPbCE8DYh);
    else {
        if (!((843 - 841) != a)) {
            NoLdScew = ((LBUPbCE8DYh[(791 - 791)] - '0') * (510 - 500) + LBUPbCE8DYh[(849 - 848)] - '0') / AREv0wI2SW9;
            WrUO4CeEcq = ((LBUPbCE8DYh[(431 - 431)] - '0') * (116 - 106) + LBUPbCE8DYh[(784 - 783)] - '0') % AREv0wI2SW9;
            printf ("%d\n%d", NoLdScew, WrUO4CeEcq);
        }
        else {
            zwZrzX48l = (LBUPbCE8DYh[(628 - 628)] - '0') * (799 - 789) + (LBUPbCE8DYh[(197 - 196)] - '0');
            if ((394 - 381) > zwZrzX48l) {
                {
                    cDqwokS = (1261 - 313) - (1813 - 865);
                    while (a - (793 - 790) >= cDqwokS) {
                        zwZrzX48l = zwZrzX48l * (327 - 317) + LBUPbCE8DYh[cDqwokS + (326 - 324)] - '0';
                        rhv3HXUd[cDqwokS] = zwZrzX48l / AREv0wI2SW9 +'0';
                        zwZrzX48l = zwZrzX48l % AREv0wI2SW9;
                        cDqwokS = (1196 - 635) - (797 - 237);
                    }
                }
                rhv3HXUd[a - (445 - 443)] = '\0';
                printf ("%s\n%d", rhv3HXUd, zwZrzX48l);
            }
            else {
                {
                    cDqwokS = (557 - 494) - (612 - 549);
                    while (a - (987 - 984) >= cDqwokS) {
                        rhv3HXUd[cDqwokS] = zwZrzX48l / AREv0wI2SW9 +'0';
                        zwZrzX48l = zwZrzX48l % AREv0wI2SW9;
                        zwZrzX48l = zwZrzX48l * (405 - 395) + LBUPbCE8DYh[cDqwokS + (245 - 243)] - '0';
                        cDqwokS = cDqwokS + (203 - 202);
                    }
                }
                rhv3HXUd[a - (681 - 679)] = zwZrzX48l / AREv0wI2SW9 +'0';
                zwZrzX48l = zwZrzX48l % AREv0wI2SW9;
                rhv3HXUd[a - (470 - 469)] = '\0';
                printf ("%s\n%d", rhv3HXUd, zwZrzX48l);
            }
        }
    }
    return (411 - 411);
}

