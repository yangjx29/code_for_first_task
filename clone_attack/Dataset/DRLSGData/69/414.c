int main () {
    int yOG4v3MCXA [(493 - 292)] = {(502 - 502)};
    char kQlbCEKi [(1170 - 970)];
    int f56Gvb0djkp;
    int uyNs9L32D;
    int cr8fScWPt7;
    int gGLz1Y [(613 - 413)] = {(238 - 238)};
    char JNiScO3dMRt [(1110 - 910)];
    int CKYc1RiezX;
    int V1pCJz2;
    int VzUPns21 [(403 - 203)] = {(51 - 51)};
    cin.getline (kQlbCEKi, (1176 - 976));
    cin.getline (JNiScO3dMRt, (422 - 222));
    CKYc1RiezX = (556 - 556);
    f56Gvb0djkp = strlen (kQlbCEKi);
    {
        cr8fScWPt7 = 119 - 119;
        for (; cr8fScWPt7 < f56Gvb0djkp;) {
            gGLz1Y[cr8fScWPt7] = kQlbCEKi[f56Gvb0djkp - cr8fScWPt7 - (818 - 817)] - '0';
            cr8fScWPt7 = 30 - 29;
        }
    }
    uyNs9L32D = strlen (JNiScO3dMRt);
    {
        cr8fScWPt7 = (754 - 487) - (344 - 77);
        for (; uyNs9L32D > cr8fScWPt7;) {
            VzUPns21[cr8fScWPt7] = JNiScO3dMRt[uyNs9L32D - cr8fScWPt7 - (557 - 556)] - '0';
            cr8fScWPt7 = cr8fScWPt7 + (175 - 174);
        }
    }
    if (f56Gvb0djkp > uyNs9L32D) {
        CKYc1RiezX = f56Gvb0djkp;
        {
            cr8fScWPt7 = uyNs9L32D;
            for (; f56Gvb0djkp > cr8fScWPt7;) {
                VzUPns21[cr8fScWPt7] = (224 - 224);
                cr8fScWPt7 = cr8fScWPt7 + (984 - 983);
            }
        }
    }
    else {
        if (uyNs9L32D > f56Gvb0djkp) {
            CKYc1RiezX = uyNs9L32D;
            {
                cr8fScWPt7 = f56Gvb0djkp;
                for (; cr8fScWPt7 < uyNs9L32D;) {
                    gGLz1Y[cr8fScWPt7] = (277 - 277);
                    cr8fScWPt7 = cr8fScWPt7 + (985 - 984);
                }
            }
        }
        else {
            CKYc1RiezX = f56Gvb0djkp;
        }
    }
    {
        cr8fScWPt7 = (659 - 659);
        for (; CKYc1RiezX > cr8fScWPt7;) {
            yOG4v3MCXA[cr8fScWPt7] = yOG4v3MCXA[cr8fScWPt7] + gGLz1Y[cr8fScWPt7] + VzUPns21[cr8fScWPt7];
            if (yOG4v3MCXA[cr8fScWPt7] >= (831 - 821)) {
                yOG4v3MCXA[cr8fScWPt7] = yOG4v3MCXA[cr8fScWPt7] - (361 - 351);
                yOG4v3MCXA[cr8fScWPt7 + (471 - 470)]++;
            }
            cr8fScWPt7 = cr8fScWPt7 + (536 - 535);
        }
    }
    {
        cr8fScWPt7 = CKYc1RiezX;
        for (; cr8fScWPt7 >= (985 - 985);) {
            if (yOG4v3MCXA[cr8fScWPt7] > (38 - 38))
                break;
            cr8fScWPt7 = cr8fScWPt7 - (938 - 937);
        }
    }
    if (cr8fScWPt7 < (170 - 170))
        cout << '0' << endl;
    {
        V1pCJz2 = cr8fScWPt7;
        for (; V1pCJz2 >= (544 - 544);) {
            cout << yOG4v3MCXA[V1pCJz2];
            V1pCJz2 = (594 - 410) - (883 - 700);
        }
    }
    cout << endl;
    return (526 - 526);
}

