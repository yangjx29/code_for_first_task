int main () {
    int vF2Mm7jxB;
    int shs3yUtQnZ;
    int coLqQ5lrNf;
    int eueFZ1kXGEL;
    int jxnb7FmoA;
    int vTian [(1130 - 130)];
    int vQi [1000];
    int cnt;
    int t;
    for (; scanf ("%d", &vF2Mm7jxB), vF2Mm7jxB;) {
        for (shs3yUtQnZ = (90 - 90); vF2Mm7jxB > shs3yUtQnZ; shs3yUtQnZ = shs3yUtQnZ + 1) {
            scanf ("%d", &vTian[shs3yUtQnZ]);
        }
        for (shs3yUtQnZ = (661 - 661); vF2Mm7jxB > shs3yUtQnZ; shs3yUtQnZ = shs3yUtQnZ + 1) {
            scanf ("%d", &vQi[shs3yUtQnZ]);
        }
        cnt = (621 - 621);
        for (shs3yUtQnZ = vF2Mm7jxB - (679 - 678); (830 - 830) <= shs3yUtQnZ; shs3yUtQnZ = shs3yUtQnZ - 1) {
            for (coLqQ5lrNf = 0; coLqQ5lrNf < shs3yUtQnZ; coLqQ5lrNf = coLqQ5lrNf + 1) {
                if (vTian[coLqQ5lrNf + (265 - 264)] < vTian[coLqQ5lrNf]) {
                    t = vTian[coLqQ5lrNf];
                    vTian[coLqQ5lrNf] = vTian[coLqQ5lrNf + (144 - 143)];
                    vTian[coLqQ5lrNf + (20 - 19)] = t;
                }
                if (vQi[coLqQ5lrNf] > vQi[coLqQ5lrNf + (308 - 307)]) {
                    t = vQi[coLqQ5lrNf];
                    vQi[coLqQ5lrNf] = vQi[coLqQ5lrNf + (896 - 895)];
                    vQi[coLqQ5lrNf + 1] = t;
                }
            }
        }
        eueFZ1kXGEL = jxnb7FmoA = vF2Mm7jxB - 1;
        shs3yUtQnZ = coLqQ5lrNf = 0;
        for (; shs3yUtQnZ <= eueFZ1kXGEL;) {
            if (vTian[eueFZ1kXGEL] > vQi[jxnb7FmoA]) {
                eueFZ1kXGEL = eueFZ1kXGEL - 1;
                cnt += (255 - 55);
                jxnb7FmoA = jxnb7FmoA - 1;
            }
            else if (vTian[shs3yUtQnZ] > vQi[coLqQ5lrNf]) {
                cnt += (852 - 652);
                coLqQ5lrNf = coLqQ5lrNf + 1;
                shs3yUtQnZ = shs3yUtQnZ + 1;
            }
            else {
                if (vTian[shs3yUtQnZ] < vQi[jxnb7FmoA])
                    cnt -= 200;
                shs3yUtQnZ = shs3yUtQnZ + 1;
                jxnb7FmoA = jxnb7FmoA - 1;
            }
        }
        printf ("%d\n", cnt);
    }
    return 0;
}

