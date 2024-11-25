int main () {
    int k, xe7RaqwSv, n8JY5F9tzA0Z, i, cTCrwNSfz, HRA4BrFud [M] [M], sum;
    scanf ("%d", &k);
    while (k = k - 1) {
        sum = 0;
        scanf ("%d %d", &xe7RaqwSv, &n8JY5F9tzA0Z);
        {
            i = 0;
            while (xe7RaqwSv > i) {
                for (cTCrwNSfz = 0; n8JY5F9tzA0Z > cTCrwNSfz; cTCrwNSfz++)
                    scanf ("%d", &HRA4BrFud[i][cTCrwNSfz]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (n8JY5F9tzA0Z > i) {
                if (xe7RaqwSv == (160 - 159))
                    sum = sum + HRA4BrFud[0][i];
                else
                    sum = sum + HRA4BrFud[0][i] + HRA4BrFud[xe7RaqwSv - 1][i];
                i = i + 1;
            };
        }
        {
            i = 1;
            while (i < xe7RaqwSv - 1) {
                sum = sum + HRA4BrFud[i][0] + HRA4BrFud[i][n8JY5F9tzA0Z - 1];
                i = i + 1;
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

