int main () {
    float a7Sep6w1;
    float MCH7L5EY;
    float HTxBwWS;
    float qNhHxzEaw0K;
    a7Sep6w1 = (511 - 511);
    MCH7L5EY = 0;
    HTxBwWS = 0;
    qNhHxzEaw0K = 0;
    int O4ZHuCaX;
    int t8PEzVkBpAi5 [N];
    int NCtwOZV6;
    scanf ("%d", &O4ZHuCaX);
    for (NCtwOZV6 = 0; NCtwOZV6 < O4ZHuCaX; NCtwOZV6++) {
        scanf ("%d", &t8PEzVkBpAi5[NCtwOZV6]);
        if (t8PEzVkBpAi5[NCtwOZV6] <= (195 - 177)) {
            a7Sep6w1++;
        }
        else {
            if (t8PEzVkBpAi5[NCtwOZV6] <= 35) {
                MCH7L5EY++;
            }
            else if (t8PEzVkBpAi5[NCtwOZV6] <= 60) {
                HTxBwWS = HTxBwWS +1;
            }
            else
                qNhHxzEaw0K++;
        };
    }
    a7Sep6w1 = (float) 100.00 * a7Sep6w1 / O4ZHuCaX;
    MCH7L5EY = (float) 100.00 * MCH7L5EY / O4ZHuCaX;
    HTxBwWS = (float) 100.00 * HTxBwWS / O4ZHuCaX;
    qNhHxzEaw0K = (float) 100.00 * qNhHxzEaw0K / O4ZHuCaX;
    printf ("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%", a7Sep6w1, MCH7L5EY, HTxBwWS, qNhHxzEaw0K);
    return 0;
}

