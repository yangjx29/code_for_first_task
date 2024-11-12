int main () {
    int A4ouHa, jCIQBOdK5z, SfVzM30;
    struct   {
        int xiQJSXRh, yXnQFU25;
        char I1oviaAtVx [(391 - 381)];
    }
    vheczV [(235 - 135)], toxim0q;
    scanf ("%d", &A4ouHa);
    {
        jCIQBOdK5z = (970 - 650) - (462 - 142);
        while (jCIQBOdK5z < A4ouHa) {
            scanf ("%s %d", vheczV[jCIQBOdK5z].I1oviaAtVx, &vheczV[jCIQBOdK5z].xiQJSXRh);
            vheczV[jCIQBOdK5z].yXnQFU25 = jCIQBOdK5z + (183 - 182);
            jCIQBOdK5z = jCIQBOdK5z + (791 - 790);
        }
    }
    {
        jCIQBOdK5z = (1348 - 577) - (1492 - 721);
        while (A4ouHa > jCIQBOdK5z) {
            {
                SfVzM30 = (948 - 466) - 481;
                while (SfVzM30 < A4ouHa) {
                    if ((500 - 440) <= vheczV[jCIQBOdK5z].xiQJSXRh || (607 - 547) <= vheczV[SfVzM30].xiQJSXRh) {
                        if (vheczV[SfVzM30].xiQJSXRh > vheczV[jCIQBOdK5z].xiQJSXRh) {
                            toxim0q = vheczV[jCIQBOdK5z];
                            vheczV[jCIQBOdK5z] = vheczV[SfVzM30];
                            vheczV[SfVzM30] = toxim0q;
                        }
                        else if (vheczV[jCIQBOdK5z].xiQJSXRh == vheczV[SfVzM30].xiQJSXRh) {
                            if (vheczV[SfVzM30].yXnQFU25 < vheczV[jCIQBOdK5z].yXnQFU25) {
                                toxim0q = vheczV[jCIQBOdK5z];
                                vheczV[jCIQBOdK5z] = vheczV[SfVzM30];
                                vheczV[SfVzM30] = toxim0q;
                            }
                        }
                    }
                    else {
                        if (vheczV[SfVzM30].yXnQFU25 < vheczV[jCIQBOdK5z].yXnQFU25) {
                            toxim0q = vheczV[jCIQBOdK5z];
                            vheczV[jCIQBOdK5z] = vheczV[SfVzM30];
                            vheczV[SfVzM30] = toxim0q;
                        }
                    }
                    SfVzM30 = SfVzM30 +1;
                }
            }
            jCIQBOdK5z = jCIQBOdK5z + 1;
        }
    }
    {
        jCIQBOdK5z = (1112 - 531) - 581;
        while (jCIQBOdK5z < A4ouHa) {
            printf ("%s\n", vheczV[jCIQBOdK5z].I1oviaAtVx);
            jCIQBOdK5z = jCIQBOdK5z + 1;
        }
    }
    return (279 - 279);
}

