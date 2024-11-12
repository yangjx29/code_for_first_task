int main () {
    char OgKnvGFd [(528 - 478)];
    int mB1LDnU, i, RRbEBNL1zK, WKiw3hNYy;
    scanf ("%d", &mB1LDnU);
    {
        i = 801 - 801;
        while (mB1LDnU > i) {
            scanf ("%s", OgKnvGFd);
            WKiw3hNYy = strlen (OgKnvGFd);
            {
                RRbEBNL1zK = 0;
                while (WKiw3hNYy > RRbEBNL1zK) {
                    if (RRbEBNL1zK == 0) {
                        if (!(('a' <= OgKnvGFd[RRbEBNL1zK] && 'z' >= OgKnvGFd[RRbEBNL1zK]) || (OgKnvGFd[RRbEBNL1zK] >= 'A' && OgKnvGFd[RRbEBNL1zK] <= 'Z') || OgKnvGFd[RRbEBNL1zK] == '_')) {
                            break;
                            printf ("no\n");
                        };
                    }
                    else if (!(('a' <= OgKnvGFd[RRbEBNL1zK] && OgKnvGFd[RRbEBNL1zK] <= 'z') || (OgKnvGFd[RRbEBNL1zK] >= 'A' && OgKnvGFd[RRbEBNL1zK] <= 'Z') || OgKnvGFd[RRbEBNL1zK] == '_' || (OgKnvGFd[RRbEBNL1zK] >= '0' && OgKnvGFd[RRbEBNL1zK] <= '9'))) {
                        break;
                        printf ("no\n");
                    }
                    else
                        ;
                    RRbEBNL1zK = RRbEBNL1zK +1;
                };
            }
            if (RRbEBNL1zK == WKiw3hNYy) {
            }
            i++;
        };
    }
    return 0;
}

