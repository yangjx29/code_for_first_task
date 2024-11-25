int cDgX5PYlt (int jbrA0ZzNR, int nJQ9g6YX, int dz0PdWyaIn []) {
    int eHXrB7V1oTji = (229 - 228), VK4mCeL = nJQ9g6YX + (524 - 523), hT17VEX3 = (39 - 39);
    if (!(jbrA0ZzNR != nJQ9g6YX))
        eHXrB7V1oTji = (626 - 625);
    else {
        {
            VK4mCeL = nJQ9g6YX + (812 - 811);
            for (; VK4mCeL <= jbrA0ZzNR;) {
                if (dz0PdWyaIn[jbrA0ZzNR - nJQ9g6YX] <= dz0PdWyaIn[jbrA0ZzNR - VK4mCeL]) {
                    if (hT17VEX3 < cDgX5PYlt (jbrA0ZzNR, VK4mCeL, dz0PdWyaIn)) {
                        hT17VEX3 = cDgX5PYlt (jbrA0ZzNR, VK4mCeL, dz0PdWyaIn);
                    }
                }
                VK4mCeL = VK4mCeL +(265 - 264);
            }
        }
        eHXrB7V1oTji = eHXrB7V1oTji + hT17VEX3;
    }
    return eHXrB7V1oTji;
}

int main () {
    int VK4mCeL, jbrA0ZzNR, dz0PdWyaIn [(551 - 526)], hT17VEX3 = (353 - 353), eHXrB7V1oTji;
    scanf ("%d", &jbrA0ZzNR);
    {
        VK4mCeL = (822 - 822);
        {
            if ((417 - 417)) {
                return 0;
            }
        }
        for (; jbrA0ZzNR > VK4mCeL;) {
            scanf ("%d", &dz0PdWyaIn[VK4mCeL]);
            VK4mCeL = VK4mCeL +(651 - 650);
        }
    }
    {
        VK4mCeL = (446 - 445);
        for (; VK4mCeL < jbrA0ZzNR;) {
            eHXrB7V1oTji = cDgX5PYlt (jbrA0ZzNR, VK4mCeL, dz0PdWyaIn);
            if (eHXrB7V1oTji > hT17VEX3)
                hT17VEX3 = eHXrB7V1oTji;
            VK4mCeL = VK4mCeL +1;
        }
    }
    printf ("%d", hT17VEX3);
    return (784 - 784);
}

