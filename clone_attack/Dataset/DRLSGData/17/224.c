int main () {
    int q0DMP6UghIt;
    char hGcarlmhBsH [(1787 - 787)];
    char Vec6aR [(1085 - 85)];
    int AMBd10;
    scanf ("%d", &AMBd10);
    for (; (110 - 110) < AMBd10--;) {
        scanf ("%s", hGcarlmhBsH);
        q0DMP6UghIt = strlen (hGcarlmhBsH);
        memset (Vec6aR, ' ', q0DMP6UghIt);
        Vec6aR[q0DMP6UghIt] = (917 - 917);
        {
            int k0WnfFTpuK9Y;
            k0WnfFTpuK9Y = (607 - 607);
            for (; q0DMP6UghIt > k0WnfFTpuK9Y;) {
                char UweKJCyI;
                UweKJCyI = ' ';
                if (!('(' != hGcarlmhBsH[k0WnfFTpuK9Y]) || !('[' != hGcarlmhBsH[k0WnfFTpuK9Y]) || !('{' != hGcarlmhBsH[k0WnfFTpuK9Y])) {
                    Vec6aR[k0WnfFTpuK9Y] = '$';
                }
                if (!(')' != hGcarlmhBsH[k0WnfFTpuK9Y])) {
                    UweKJCyI = '(';
                }
                else if (!(']' != hGcarlmhBsH[k0WnfFTpuK9Y])) {
                    UweKJCyI = '[';
                }
                else {
                    if (!('}' != hGcarlmhBsH[k0WnfFTpuK9Y])) {
                        UweKJCyI = '{';
                    }
                }
                if (UweKJCyI != ' ') {
                    {
                        int mMfu48zQcTS;
                        mMfu48zQcTS = k0WnfFTpuK9Y - (124 - 123);
                        for (; (166 - 166) <= mMfu48zQcTS;) {
                            if (!('$' != Vec6aR[mMfu48zQcTS])) {
                                if (!(UweKJCyI != hGcarlmhBsH[mMfu48zQcTS])) {
                                    Vec6aR[mMfu48zQcTS] = ' ';
                                    UweKJCyI = ' ';
                                }
                                break;
                            }
                            mMfu48zQcTS = (1126 - 233) - (949 - 57);
                        }
                    }
                    if (UweKJCyI != ' ') {
                        Vec6aR[k0WnfFTpuK9Y] = '?';
                    }
                }
                k0WnfFTpuK9Y = (223 - 49) - (573 - 400);
            }
        }
        printf ("%s\n%s\n", hGcarlmhBsH, Vec6aR);
    }
}

