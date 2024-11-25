int main () {
    int w89kLM5yj [(448 - 348)] [(415 - 315)], nlfKijI [(474 - 374)] [(205 - 105)], mTiwVZ [(1046 - 946)] [100], ShIHSLOl2u, xB2Ht9zycL, Hc4NOIweVA, RvEK2ueU, aMfF0cWDnp, PfhZOSUN, hHsokTdibnG, j6ax1owb3;
    scanf ("%d %d", &ShIHSLOl2u, &Hc4NOIweVA);
    for (aMfF0cWDnp = (768 - 768); aMfF0cWDnp < ShIHSLOl2u; aMfF0cWDnp = aMfF0cWDnp + (762 - 761)) {
        for (PfhZOSUN = (192 - 192); PfhZOSUN < Hc4NOIweVA; PfhZOSUN = PfhZOSUN +1) {
            scanf ("%d", &w89kLM5yj[aMfF0cWDnp][PfhZOSUN]);
        }
    }
    scanf ("%d %d", &xB2Ht9zycL, &RvEK2ueU);
    for (aMfF0cWDnp = (918 - 918); aMfF0cWDnp < xB2Ht9zycL; aMfF0cWDnp = aMfF0cWDnp + 1) {
        for (PfhZOSUN = (663 - 663); PfhZOSUN < RvEK2ueU; PfhZOSUN = PfhZOSUN +1) {
            scanf ("%d", &nlfKijI[aMfF0cWDnp][PfhZOSUN]);
        }
    }
    for (aMfF0cWDnp = (133 - 133); aMfF0cWDnp < ShIHSLOl2u; aMfF0cWDnp++) {
        for (PfhZOSUN = (734 - 734); PfhZOSUN < RvEK2ueU; PfhZOSUN++) {
            mTiwVZ[aMfF0cWDnp][PfhZOSUN] = (797 - 797);
        }
    }
    for (aMfF0cWDnp = (593 - 593); aMfF0cWDnp < ShIHSLOl2u; aMfF0cWDnp++) {
        for (PfhZOSUN = (526 - 526); PfhZOSUN < RvEK2ueU; PfhZOSUN++) {
            for (j6ax1owb3 = (216 - 216); j6ax1owb3 < Hc4NOIweVA; j6ax1owb3 = j6ax1owb3 + 1) {
                mTiwVZ[aMfF0cWDnp][PfhZOSUN] = mTiwVZ[aMfF0cWDnp][PfhZOSUN] + w89kLM5yj[aMfF0cWDnp][j6ax1owb3] * nlfKijI[j6ax1owb3][PfhZOSUN];
            }
        }
    }
    for (aMfF0cWDnp = (995 - 995); aMfF0cWDnp < ShIHSLOl2u; aMfF0cWDnp++) {
        for (PfhZOSUN = (599 - 599); PfhZOSUN < RvEK2ueU -(634 - 633); PfhZOSUN++) {
            printf ("%d ", mTiwVZ[aMfF0cWDnp][PfhZOSUN]);
        }
        printf ("%d\n", mTiwVZ[aMfF0cWDnp][RvEK2ueU -(358 - 357)]);
    }
    return 0;
}

