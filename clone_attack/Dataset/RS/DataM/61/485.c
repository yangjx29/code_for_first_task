int acNqLOCB4y3Y (int EaZ3mpjlgvX);

int main () {
    int q0BvDORKPIT, EaZ3mpjlgvX, oiAmVH9, obqt63Q2OF [20], result;
    scanf ("%d", &q0BvDORKPIT);
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
    for (oiAmVH9 = 0; oiAmVH9 < q0BvDORKPIT; oiAmVH9++) {
        scanf ("%d", &EaZ3mpjlgvX);
        result = acNqLOCB4y3Y (EaZ3mpjlgvX);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", result);
    }
    return 0;
}

int acNqLOCB4y3Y (int EaZ3mpjlgvX) {
    int result, oiAmVH9, X98y1U6 [20];
    X98y1U6[0] = 0;
    X98y1U6[1] = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    {
        oiAmVH9 = 2;
        while (oiAmVH9 <= EaZ3mpjlgvX) {
            X98y1U6[oiAmVH9] = X98y1U6[oiAmVH9 - 1] + X98y1U6[oiAmVH9 - 2];
            oiAmVH9 = oiAmVH9 + 1;
        };
    }
    result = X98y1U6[EaZ3mpjlgvX];
    return result;
}

