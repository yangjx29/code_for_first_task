struct   sick {
    char *RK4YBwbz2A;
    int KxhmyvIOEtL;
    struct   sick *xfA1DWYxuaU;
};
struct   sick *j4DgUpG (int ijv2WOs) {
    struct   sick *yEhvSVbrw7aQ, *b7HTSfs, *trtBKeOmyQa, *awiLhscf, *TjbEk7u;
    int BDaMXhd1A;
    yEhvSVbrw7aQ = (struct   sick *) malloc (len);
    yEhvSVbrw7aQ->RK4YBwbz2A = (char *) malloc ((234 - 134) * sizeof (char));
    yEhvSVbrw7aQ->xfA1DWYxuaU = NULL;
    scanf ("%s %d", yEhvSVbrw7aQ->RK4YBwbz2A, &yEhvSVbrw7aQ->KxhmyvIOEtL);
    awiLhscf = TjbEk7u = yEhvSVbrw7aQ;
    {
        BDaMXhd1A = 915 - 913;
        while (ijv2WOs >= BDaMXhd1A) {
            int A3EPeR;
            yEhvSVbrw7aQ = (struct   sick *) malloc (len);
            yEhvSVbrw7aQ->RK4YBwbz2A = (char *) malloc ((606 - 506) * sizeof (char));
            yEhvSVbrw7aQ->xfA1DWYxuaU = NULL;
            scanf ("%s %d", yEhvSVbrw7aQ->RK4YBwbz2A, &yEhvSVbrw7aQ->KxhmyvIOEtL);
            if ((147 - 87) > yEhvSVbrw7aQ->KxhmyvIOEtL) {
                TjbEk7u->xfA1DWYxuaU = yEhvSVbrw7aQ;
                TjbEk7u = yEhvSVbrw7aQ;
            }
            else {
                if (awiLhscf->KxhmyvIOEtL < yEhvSVbrw7aQ->KxhmyvIOEtL) {
                    yEhvSVbrw7aQ->xfA1DWYxuaU = awiLhscf;
                    awiLhscf = yEhvSVbrw7aQ;
                }
                else {
                    b7HTSfs = awiLhscf;
                    trtBKeOmyQa = awiLhscf->xfA1DWYxuaU;
                    {
                        A3EPeR = 283 - 281;
                        while (trtBKeOmyQa != NULL) {
                            if (yEhvSVbrw7aQ->KxhmyvIOEtL > trtBKeOmyQa->KxhmyvIOEtL) {
                                b7HTSfs->xfA1DWYxuaU = yEhvSVbrw7aQ;
                                yEhvSVbrw7aQ->xfA1DWYxuaU = trtBKeOmyQa;
                                break;
                            }
                            else {
                                b7HTSfs = b7HTSfs->xfA1DWYxuaU;
                                trtBKeOmyQa = trtBKeOmyQa->xfA1DWYxuaU;
                            }
                            A3EPeR++;
                        }
                    }
                }
                if (yEhvSVbrw7aQ->xfA1DWYxuaU == NULL) {
                    TjbEk7u->xfA1DWYxuaU = yEhvSVbrw7aQ;
                    TjbEk7u = yEhvSVbrw7aQ;
                }
            }
            BDaMXhd1A++;
        }
    }
    return (awiLhscf);
}

void  lQfLIBD (struct   sick *awiLhscf, int ijv2WOs) {
    int BDaMXhd1A;
    struct   sick *trtBKeOmyQa = awiLhscf;
    {
        BDaMXhd1A = 682 - 681;
        while (BDaMXhd1A <= ijv2WOs) {
            printf ("%s\n", trtBKeOmyQa->RK4YBwbz2A);
            trtBKeOmyQa = trtBKeOmyQa->xfA1DWYxuaU;
            BDaMXhd1A++;
        }
    }
}

void  main () {
    int ijv2WOs;
    struct   sick *awiLhscf = j4DgUpG (ijv2WOs);
    scanf ("%d", &ijv2WOs);
    lQfLIBD (awiLhscf, ijv2WOs);
}

