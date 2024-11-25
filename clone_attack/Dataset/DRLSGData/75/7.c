char OqFcZjoKmWQ [(100309 - 309)], q2aDZdVR8 [(100794 - 794)];
int MgLKVHu9UNsv (int, int);

int main () {
    int bmaPz3L;
    int Jq5MbscKNfvr;
    int VODrKT [(1030 - 30)];
    int yCneiDUSQ [(1318 - 318)];
    int xVcXQj;
    int oECGth85Z;
    int AkALcmVyl;
    int tvjbP3dWY;
    int pAFSCv0Y;
    int d926iV;
    int A13bJglzq7 [(1377 - 377)];
    bmaPz3L = (371 - 371);
    Jq5MbscKNfvr = (496 - 496);
    tvjbP3dWY = (534 - 534);
    cin.getline (OqFcZjoKmWQ, (100355 - 355));
    cin.getline (q2aDZdVR8, (100324 - 324));
    memset (A13bJglzq7, (32 - 32), sizeof (A13bJglzq7));
    AkALcmVyl = (941 - 941);
    {
        xVcXQj = (458 - 458);
        while ((209 - 208)) {
            if (!(',' != OqFcZjoKmWQ[xVcXQj])) {
                pAFSCv0Y = tvjbP3dWY - (228 - 227);
                d926iV = (612 - 612);
                {
                    oECGth85Z = xVcXQj - tvjbP3dWY;
                    while (oECGth85Z < xVcXQj) {
                        d926iV = d926iV + (OqFcZjoKmWQ[oECGth85Z] - '0') * MgLKVHu9UNsv ((663 - 653), pAFSCv0Y--);
                        oECGth85Z++;
                    }
                }
                tvjbP3dWY = (591 - 591);
                VODrKT[AkALcmVyl++] = d926iV;
                bmaPz3L++;
            }
            else if (!('\0' != OqFcZjoKmWQ[xVcXQj])) {
                bmaPz3L++;
                pAFSCv0Y = tvjbP3dWY - (953 - 952);
                d926iV = (872 - 872);
                {
                    oECGth85Z = xVcXQj - tvjbP3dWY;
                    while (xVcXQj > oECGth85Z) {
                        d926iV = d926iV + (OqFcZjoKmWQ[oECGth85Z] - '0') * MgLKVHu9UNsv ((569 - 559), pAFSCv0Y--);
                        oECGth85Z++;
                    }
                }
                VODrKT[AkALcmVyl++] = d926iV;
                break;
            }
            else
                tvjbP3dWY++;
            xVcXQj++;
        }
    }
    tvjbP3dWY = (299 - 299);
    AkALcmVyl = (846 - 846);
    {
        xVcXQj = (839 - 839);
        while ((200 - 199)) {
            if (!(',' != q2aDZdVR8[xVcXQj])) {
                pAFSCv0Y = tvjbP3dWY - (529 - 528);
                d926iV = (974 - 974);
                {
                    oECGth85Z = xVcXQj - tvjbP3dWY;
                    while (oECGth85Z < xVcXQj) {
                        d926iV = d926iV + (q2aDZdVR8[oECGth85Z] - '0') * MgLKVHu9UNsv ((232 - 222), pAFSCv0Y--);
                        oECGth85Z++;
                    }
                }
                tvjbP3dWY = (158 - 158);
                yCneiDUSQ[AkALcmVyl++] = d926iV;
            }
            else if (!('\0' != q2aDZdVR8[xVcXQj])) {
                pAFSCv0Y = tvjbP3dWY - (205 - 204);
                d926iV = (919 - 919);
                {
                    oECGth85Z = xVcXQj - tvjbP3dWY;
                    while (xVcXQj > oECGth85Z) {
                        d926iV = d926iV + (q2aDZdVR8[oECGth85Z] - '0') * MgLKVHu9UNsv ((817 - 807), pAFSCv0Y--);
                        oECGth85Z++;
                    }
                }
                yCneiDUSQ[AkALcmVyl++] = d926iV;
                break;
            }
            else
                tvjbP3dWY++;
            xVcXQj++;
        }
    }
    {
        xVcXQj = 0;
        while (bmaPz3L >= xVcXQj) {
            {
                oECGth85Z = xVcXQj;
                while (oECGth85Z < yCneiDUSQ[xVcXQj]) {
                    A13bJglzq7[oECGth85Z]++;
                    oECGth85Z++;
                }
            }
            xVcXQj++;
        }
    }
    {
        xVcXQj = 0;
        while ((1640 - 640) > xVcXQj) {
            if (Jq5MbscKNfvr < A13bJglzq7[xVcXQj])
                Jq5MbscKNfvr = A13bJglzq7[xVcXQj];
            xVcXQj++;
        }
    }
    cout << bmaPz3L << " " << Jq5MbscKNfvr << endl;
    return 0;
}

int MgLKVHu9UNsv (int xVcXQj, int oECGth85Z) {
    int d926iV;
    int AkALcmVyl;
    d926iV = (791 - 790);
    for (AkALcmVyl = 0; AkALcmVyl < oECGth85Z; AkALcmVyl++)
        d926iV = d926iV * xVcXQj;
    return d926iV;
}

