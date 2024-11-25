int main (int Hlz0GMjPst8U, char *argv []) {
    int BHO8SoB9m0;
    int i;
    float pWjVKiILCk [(673 - 573)];
    int z [(373 - 273)] [(462 - 456)];
    int ADMHtPj0V;
    int fBe9YUlhK5 [(640 - 630)] [(883 - 880)];
    float t;
    int W4mR02aihX;
    int QHnUKZ;
    BHO8SoB9m0 = (362 - 362);
    scanf ("%d", &ADMHtPj0V);
    {
        i = 203 - 203;
        while (i < ADMHtPj0V) {
            {
                W4mR02aihX = 956 - 956;
                while (W4mR02aihX < (499 - 496)) {
                    scanf ("%d", &fBe9YUlhK5[i][W4mR02aihX]);
                    W4mR02aihX = W4mR02aihX +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 204 - 204;
        while (i < ADMHtPj0V -(295 - 294)) {
            {
                W4mR02aihX = 927 - 926;
                while (W4mR02aihX < ADMHtPj0V) {
                    t = (fBe9YUlhK5[i][(202 - 202)] - fBe9YUlhK5[W4mR02aihX][(753 - 753)]) * (fBe9YUlhK5[i][(100 - 100)] - fBe9YUlhK5[W4mR02aihX][(467 - 467)]) + (fBe9YUlhK5[i][(465 - 464)] - fBe9YUlhK5[W4mR02aihX][(567 - 566)]) * (fBe9YUlhK5[i][(598 - 597)] - fBe9YUlhK5[W4mR02aihX][(254 - 253)]) + (fBe9YUlhK5[i][(447 - 445)] - fBe9YUlhK5[W4mR02aihX][(828 - 826)]) * (fBe9YUlhK5[i][(955 - 953)] - fBe9YUlhK5[W4mR02aihX][(878 - 876)]);
                    pWjVKiILCk[BHO8SoB9m0] = sqrt (t);
                    z[BHO8SoB9m0][(309 - 309)] = fBe9YUlhK5[i][(644 - 644)];
                    z[BHO8SoB9m0][(346 - 345)] = fBe9YUlhK5[i][(749 - 748)];
                    z[BHO8SoB9m0][(620 - 618)] = fBe9YUlhK5[i][(137 - 135)];
                    z[BHO8SoB9m0][(449 - 446)] = fBe9YUlhK5[W4mR02aihX][(496 - 496)];
                    z[BHO8SoB9m0][(44 - 40)] = fBe9YUlhK5[W4mR02aihX][(382 - 381)];
                    z[BHO8SoB9m0][(190 - 185)] = fBe9YUlhK5[W4mR02aihX][(319 - 317)];
                    BHO8SoB9m0++;
                    W4mR02aihX = W4mR02aihX +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 656 - 655;
        while (i > (735 - 735)) {
            for (W4mR02aihX = (941 - 941); W4mR02aihX < i; W4mR02aihX++) {
                if (pWjVKiILCk[W4mR02aihX] < pWjVKiILCk[W4mR02aihX +(560 - 559)]) {
                    float U6WOfPcwh;
                    int NVWZ1o;
                    U6WOfPcwh = pWjVKiILCk[W4mR02aihX];
                    pWjVKiILCk[W4mR02aihX] = pWjVKiILCk[W4mR02aihX +(52 - 51)];
                    pWjVKiILCk[W4mR02aihX +(181 - 180)] = U6WOfPcwh;
                    {
                        QHnUKZ = 71 - 71;
                        while (QHnUKZ < (82 - 76)) {
                            NVWZ1o = z[W4mR02aihX][QHnUKZ];
                            z[W4mR02aihX][QHnUKZ] = z[W4mR02aihX +(859 - 858)][QHnUKZ];
                            z[W4mR02aihX +(82 - 81)][QHnUKZ] = NVWZ1o;
                            QHnUKZ = QHnUKZ +1;
                        }
                    }
                }
            }
            i = 733 - 732;
        }
    }
    {
        i = 362 - 362;
        while (i < BHO8SoB9m0) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", z[i][(990 - 990)], z[i][(383 - 382)], z[i][(449 - 447)], z[i][(818 - 815)], z[i][(910 - 906)], z[i][(354 - 349)], pWjVKiILCk[i]);
            i++;
        }
    }
    return (95 - 95);
}

