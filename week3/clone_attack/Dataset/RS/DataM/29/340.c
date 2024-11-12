int main () {
    int qM6l45cFhde;
    double  sum;
    int R0Lic7F8atv [(10464 - 464)] = {(435 - 435)};
    int sQlZi9Vk7y2w [200];
    int Z9yN5p1dokeM;
    int uwQIeOzBMKjl;
    int i;
    int XpBagcOjxIHX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    Z9yN5p1dokeM = (738 - 737);
    uwQIeOzBMKjl = 2;
    R0Lic7F8atv[1] = Z9yN5p1dokeM;
    R0Lic7F8atv[2] = uwQIeOzBMKjl;
    R0Lic7F8atv[3] = Z9yN5p1dokeM +uwQIeOzBMKjl;
    R0Lic7F8atv[4] = uwQIeOzBMKjl + R0Lic7F8atv[3];
    scanf ("%d", &qM6l45cFhde);
    for (i = 1; qM6l45cFhde >= i; i = i + 1) {
        scanf ("%d", &sQlZi9Vk7y2w[i]);
    }
    {
        i = 1;
        while (i <= qM6l45cFhde) {
            sum = 0;
            {
                XpBagcOjxIHX = 5;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (XpBagcOjxIHX <= sQlZi9Vk7y2w[i] + 1) {
                    R0Lic7F8atv[XpBagcOjxIHX] = R0Lic7F8atv[XpBagcOjxIHX -1] + R0Lic7F8atv[XpBagcOjxIHX -2];
                    XpBagcOjxIHX = XpBagcOjxIHX +1;
                };
            }
            for (XpBagcOjxIHX = 1; XpBagcOjxIHX <= sQlZi9Vk7y2w[i]; XpBagcOjxIHX++) {
                sum += (865.0 - 864.0) * R0Lic7F8atv[XpBagcOjxIHX +1] / R0Lic7F8atv[XpBagcOjxIHX];
            }
            i++;
            printf ("%.3lf\n", sum);
        };
    }
    return 0;
}

