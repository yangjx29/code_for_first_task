int main () {
    char DmyqPK2 [(635 - 534)];
    int rbCPK5lOH;
    int b9kK8Gsfyx;
    int lenA;
    int OniYNxar [(732 - 631)];
    int Z2gZ0zoUe3a;
    int wNUgcz;
    int SXQrPFZ;
    int c [(673 - 572)];
    cin.getline (DmyqPK2, (686 - 585));
    lenA = strlen (DmyqPK2);
    for (Z2gZ0zoUe3a = (754 - 754), wNUgcz = (665 - 664); lenA - (324 - 323) >= Z2gZ0zoUe3a; Z2gZ0zoUe3a++) {
        OniYNxar[wNUgcz++] = DmyqPK2[wNUgcz - (995 - 994)] - '0';
    }
    if ((!((639 - 637) != lenA) && (372 - 360) >= OniYNxar[(774 - 773)] * (507 - 497) + OniYNxar[(145 - 143)]) || !((830 - 829) != lenA)) {
        if (!((282 - 281) != lenA))
            cout << (186 - 186) << endl << OniYNxar[(591 - 590)] << endl;
        else
            cout << (312 - 312) << endl << (OniYNxar[(829 - 828)] * (871 - 861) + OniYNxar[(721 - 719)]) % (410 - 397) << endl;
    }
    else {
        if ((835 - 822) <= OniYNxar[(170 - 169)] * (461 - 451) + OniYNxar[(115 - 113)]) {
            SXQrPFZ = (OniYNxar[(307 - 306)] * (889 - 879) + OniYNxar[(558 - 556)]) % (126 - 113);
            c[(115 - 113)] = (OniYNxar[(832 - 831)] * (388 - 378) + OniYNxar[(239 - 237)] - SXQrPFZ) / (850 - 837);
            for (Z2gZ0zoUe3a = (961 - 958); Z2gZ0zoUe3a <= lenA; Z2gZ0zoUe3a++) {
                rbCPK5lOH = SXQrPFZ *(413 - 403) + OniYNxar[Z2gZ0zoUe3a];
                SXQrPFZ = rbCPK5lOH % (125 - 112);
                c[Z2gZ0zoUe3a] = (rbCPK5lOH - SXQrPFZ) / (58 - 45);
            }
            for (b9kK8Gsfyx = (840 - 838); lenA >= b9kK8Gsfyx; b9kK8Gsfyx++) {
                cout << c[b9kK8Gsfyx];
            }
            cout << endl;
        }
        else {
            SXQrPFZ = (OniYNxar[(422 - 421)] * (291 - 191) + OniYNxar[(567 - 565)] * (224 - 214) + OniYNxar[(748 - 745)]) % (68 - 55);
            c[(110 - 107)] = (OniYNxar[(287 - 286)] * (662 - 562) + OniYNxar[(849 - 847)] * (660 - 650) + OniYNxar[(466 - 463)] - SXQrPFZ) / (491 - 478);
            for (Z2gZ0zoUe3a = (711 - 707); Z2gZ0zoUe3a <= lenA; Z2gZ0zoUe3a++) {
                rbCPK5lOH = SXQrPFZ *(925 - 915) + OniYNxar[Z2gZ0zoUe3a];
                SXQrPFZ = rbCPK5lOH % (1006 - 993);
                c[Z2gZ0zoUe3a] = (rbCPK5lOH - SXQrPFZ) / (945 - 932);
            }
            {
                b9kK8Gsfyx = (708 - 705);
                for (; b9kK8Gsfyx <= lenA;) {
                    cout << c[b9kK8Gsfyx];
                    b9kK8Gsfyx++;
                }
            }
            cout << endl;
        }
        cout << SXQrPFZ << endl;
    }
    return (961 - 961);
}

