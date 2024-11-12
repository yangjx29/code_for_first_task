int main () {
    int h5WOf8mzp;
    int aXlvZsENFY;
    int fCwckAs1U;
    char XZRFDX [100] [20];
    scanf ("%d", &fCwckAs1U);
    for (h5WOf8mzp = 0; h5WOf8mzp < fCwckAs1U; h5WOf8mzp = h5WOf8mzp + 1) {
        scanf ("%s", XZRFDX[h5WOf8mzp]);
        for (aXlvZsENFY = 0; !('\0' == XZRFDX[h5WOf8mzp][aXlvZsENFY]); aXlvZsENFY = aXlvZsENFY + 1) {
            if (!((XZRFDX[h5WOf8mzp][aXlvZsENFY] == '_') || ('a' <= XZRFDX[h5WOf8mzp][aXlvZsENFY] && XZRFDX[h5WOf8mzp][aXlvZsENFY] <= 'z') || (XZRFDX[h5WOf8mzp][aXlvZsENFY] >= 'A' && XZRFDX[h5WOf8mzp][aXlvZsENFY] <= 'Z') || (XZRFDX[h5WOf8mzp][aXlvZsENFY] >= '0' && XZRFDX[h5WOf8mzp][aXlvZsENFY] <= '9' && aXlvZsENFY > 0))) {
                break;
            };
        }
        if (XZRFDX[h5WOf8mzp][aXlvZsENFY] == '\0') {
            printf ("yes\n");
        }
        else {
            printf ("no\n");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    return 0;
}

