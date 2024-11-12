int fvS0qVMtAzg [(676 - 571)] [(1089 - 984)] = {(586 - 586)}, b [105] [105] = {(578 - 578)};

int main () {
    int VPqNtJ1SaA;
    int lZdQI23Rmz;
    int unPHdgs;
    int e6k0QuzEZ2Y;
    int m8iM4mVt;
    int Z3MWQGy;
    int ljOXdrh4wsBS;
    int Dz7gxb2f9;
    int BDkvwdYcQHT;
    int GJMrac07O;
    scanf ("%d%d", &VPqNtJ1SaA, &lZdQI23Rmz);
    {
        {
            if (0) {
                return 0;
            }
        }
        m8iM4mVt = 292 - 292;
        while (m8iM4mVt < VPqNtJ1SaA) {
            {
                Z3MWQGy = 856 - 856;
                while (Z3MWQGy < lZdQI23Rmz) {
                    scanf ("%d", &fvS0qVMtAzg[m8iM4mVt][Z3MWQGy]);
                    Z3MWQGy = Z3MWQGy +1;
                }
            }
            m8iM4mVt = m8iM4mVt + 1;
        }
    }
    scanf ("%d%d", &unPHdgs, &e6k0QuzEZ2Y);
    {
        m8iM4mVt = 975 - 975;
        while (unPHdgs > m8iM4mVt) {
            {
                Z3MWQGy = 254 - 254;
                while (e6k0QuzEZ2Y > Z3MWQGy) {
                    scanf ("%d", &b[m8iM4mVt][Z3MWQGy]);
                    Z3MWQGy++;
                }
            }
            m8iM4mVt = m8iM4mVt + 1;
        }
    }
    if (VPqNtJ1SaA > unPHdgs)
        ljOXdrh4wsBS = VPqNtJ1SaA;
    else
        ljOXdrh4wsBS = unPHdgs;
    if (e6k0QuzEZ2Y < lZdQI23Rmz)
        Dz7gxb2f9 = lZdQI23Rmz;
    else
        Dz7gxb2f9 = e6k0QuzEZ2Y;
    {
        m8iM4mVt = 523 - 523;
        while (ljOXdrh4wsBS > m8iM4mVt) {
            {
                Z3MWQGy = 498 - 498;
                while (Dz7gxb2f9 > Z3MWQGy) {
                    BDkvwdYcQHT = 0;
                    {
                        GJMrac07O = 0;
                        while (GJMrac07O < lZdQI23Rmz) {
                            BDkvwdYcQHT = BDkvwdYcQHT +fvS0qVMtAzg[m8iM4mVt][GJMrac07O] * b[GJMrac07O][Z3MWQGy];
                            GJMrac07O = GJMrac07O +1;
                        }
                    }
                    if (m8iM4mVt < VPqNtJ1SaA &&Z3MWQGy < e6k0QuzEZ2Y) {
                        if (Z3MWQGy == 0)
                            printf ("%d", BDkvwdYcQHT);
                        else
                            printf (" %d", BDkvwdYcQHT);
                    }
                    Z3MWQGy++;
                }
            }
            printf ("\n");
            m8iM4mVt++;
        }
    }
    return 0;
}

