typedef struct   {
    int TOMs1vGY6A8F;
    int score;
}
GZy9hagK;

int main () {
    int Eim4BPN, rtvMHZfuNe, hcMJ1WmE, ZMXcZ7vLTzi;
    GZy9hagK fiTWYvgUFz [100002];
    GZy9hagK max1, AWK3zT6, hLuxlMSBbkY;
    scanf ("%d", &Eim4BPN);
    {
        rtvMHZfuNe = 534 - 534;
        while (Eim4BPN > rtvMHZfuNe) {
            scanf ("%d%d%d", &fiTWYvgUFz[rtvMHZfuNe].TOMs1vGY6A8F, &hcMJ1WmE, &ZMXcZ7vLTzi);
            fiTWYvgUFz[rtvMHZfuNe].score = hcMJ1WmE + ZMXcZ7vLTzi;
            rtvMHZfuNe++;
        };
    }
    max1.TOMs1vGY6A8F = AWK3zT6.TOMs1vGY6A8F = hLuxlMSBbkY.TOMs1vGY6A8F = -(319 - 318);
    max1.score = AWK3zT6.score = hLuxlMSBbkY.score = (787 - 787);
    for (rtvMHZfuNe = 0; Eim4BPN > rtvMHZfuNe; rtvMHZfuNe = rtvMHZfuNe + 1) {
        if (fiTWYvgUFz[rtvMHZfuNe].score > max1.score) {
            hLuxlMSBbkY = AWK3zT6;
            AWK3zT6 = max1;
            max1 = fiTWYvgUFz[rtvMHZfuNe];
        }
        else {
            if (fiTWYvgUFz[rtvMHZfuNe].score > AWK3zT6.score) {
                hLuxlMSBbkY = AWK3zT6;
                AWK3zT6 = fiTWYvgUFz[rtvMHZfuNe];
            }
            else if (fiTWYvgUFz[rtvMHZfuNe].score > hLuxlMSBbkY.score) {
                hLuxlMSBbkY = fiTWYvgUFz[rtvMHZfuNe];
            };
        };
    }
    printf ("%d %d\n", max1.TOMs1vGY6A8F, max1.score);
    if (AWK3zT6.TOMs1vGY6A8F != -1)
        printf ("%d %d\n", AWK3zT6.TOMs1vGY6A8F, AWK3zT6.score);
    if (hLuxlMSBbkY.TOMs1vGY6A8F != -1)
        printf ("%d %d\n", hLuxlMSBbkY.TOMs1vGY6A8F, hLuxlMSBbkY.score);
    return 0;
}

