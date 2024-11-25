int d4kh15IZ, CLpdoxjmIaq, cKcIHhaMSbs [(1940 - 940)] = {(400 - 400)}, wTEVPxfiA [(1995 - 995)] = {(963 - 963)}, D8iq5awfz [1000] = {(963 - 963)};

void  KepJtbnP9ZX () {
    int xxnTzjEY;
    {
        xxnTzjEY = (372 - 372);
        for (; d4kh15IZ > xxnTzjEY;) {
            scanf ("%d", &cKcIHhaMSbs[xxnTzjEY]);
            xxnTzjEY = xxnTzjEY + (661 - 660);
        }
    }
    {
        xxnTzjEY = (875 - 875);
        for (; CLpdoxjmIaq > xxnTzjEY;) {
            scanf ("%d", &wTEVPxfiA[xxnTzjEY]);
            xxnTzjEY = xxnTzjEY + (701 - 700);
        }
    }
}

void  cbTBpeLf () {
    int jctkwZ3N8R5;
    int knKsm71z9vu;
    int VTYvjOnudomQ;
    {
        knKsm71z9vu = (920 - 561) - 359;
        while (d4kh15IZ >= knKsm71z9vu) {
            {
                VTYvjOnudomQ = (958 - 175) - 783;
                for (; VTYvjOnudomQ < d4kh15IZ - (848 - 847);) {
                    if (cKcIHhaMSbs[VTYvjOnudomQ] > cKcIHhaMSbs[VTYvjOnudomQ +(344 - 343)]) {
                        jctkwZ3N8R5 = cKcIHhaMSbs[VTYvjOnudomQ];
                        cKcIHhaMSbs[VTYvjOnudomQ] = cKcIHhaMSbs[VTYvjOnudomQ +(581 - 580)];
                        cKcIHhaMSbs[VTYvjOnudomQ +(338 - 337)] = jctkwZ3N8R5;
                    }
                    VTYvjOnudomQ = VTYvjOnudomQ +(456 - 455);
                }
            }
            knKsm71z9vu = knKsm71z9vu + (588 - 587);
        }
    }
    {
        knKsm71z9vu = (665 - 665);
        for (; knKsm71z9vu <= CLpdoxjmIaq;) {
            VTYvjOnudomQ = (445 - 445);
            while (VTYvjOnudomQ < CLpdoxjmIaq -(855 - 854)) {
                if (wTEVPxfiA[VTYvjOnudomQ] > wTEVPxfiA[VTYvjOnudomQ +1]) {
                    jctkwZ3N8R5 = wTEVPxfiA[VTYvjOnudomQ];
                    wTEVPxfiA[VTYvjOnudomQ] = wTEVPxfiA[VTYvjOnudomQ +1];
                    wTEVPxfiA[VTYvjOnudomQ +1] = jctkwZ3N8R5;
                }
                VTYvjOnudomQ = VTYvjOnudomQ +1;
            }
            knKsm71z9vu = knKsm71z9vu + 1;
        }
    }
}

void  lHTozsYSb () {
    int cwK7vYkLm4;
    int j36IFh4p;
    {
        cwK7vYkLm4 = 0;
        for (; cwK7vYkLm4 < d4kh15IZ;) {
            D8iq5awfz[cwK7vYkLm4] = cKcIHhaMSbs[cwK7vYkLm4];
            cwK7vYkLm4 = cwK7vYkLm4 + 1;
        }
    }
    {
        j36IFh4p = 0;
        while (j36IFh4p < CLpdoxjmIaq) {
            D8iq5awfz[cwK7vYkLm4] = wTEVPxfiA[j36IFh4p];
            cwK7vYkLm4 = cwK7vYkLm4 + 1;
            j36IFh4p = j36IFh4p + 1;
        }
    }
}

void  K9K5b4nyt () {
    int PVPlpoh;
    {
        PVPlpoh = 0;
        while (PVPlpoh < d4kh15IZ + CLpdoxjmIaq) {
            printf ("%d", D8iq5awfz[PVPlpoh]);
            if (PVPlpoh != d4kh15IZ + CLpdoxjmIaq -1)
                ;
            else
                ;
            PVPlpoh = PVPlpoh +1;
        }
    }
}

int main () {
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d %d", &d4kh15IZ, &CLpdoxjmIaq);
    KepJtbnP9ZX ();
    cbTBpeLf ();
    lHTozsYSb ();
    K9K5b4nyt ();
    return 0;
}

