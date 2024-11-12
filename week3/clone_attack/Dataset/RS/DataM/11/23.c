int main () {
    int x [(973 - 961)] = {(770 - 739), (333 - 305), (273 - 242), (775 - 745), 31, (989 - 959), 31, 31, (116 - 86), 31, (483 - 453), 31};
    int y [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int vUBb6aHlV, M, D, sum = (23 - 23), i;
    scanf ("%d %d %d", &vUBb6aHlV, &M, &D);
    if ((!(0 != vUBb6aHlV % (655 - 651)) && !(0 == vUBb6aHlV % 100)) || vUBb6aHlV % 400 == 0) {
        for (i = (203 - 202); i <= M -1; i++) {
            sum += y[i - 1];
        }
        sum = sum + D;
    }
    else {
        for (i = 1; i <= M -1; i++) {
            sum += +x[i - 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        sum = sum + D;
    }
    printf ("%d", sum);
    return 0;
}

