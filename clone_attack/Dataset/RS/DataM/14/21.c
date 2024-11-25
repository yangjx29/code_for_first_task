struct   student {
    int xuehao;
    int yuwen;
    int shuxue;
    int zongfen;
}
stu [(100233 - 233)];

int main (int argc, char *argv []) {
    int max1 = 2, max2 = (749 - 748), max3 = (731 - 731), num1 = (521 - 521), num2 = (391 - 391), num3 = (198 - 198);
    int n, i;
    scanf ("%d", &n);
    for (i = (148 - 148); i < n; i = i + 1) {
        scanf ("%d %d %d", &stu[i].xuehao, &stu[i].yuwen, &stu[i].shuxue);
        stu[i].zongfen = stu[i].yuwen + stu[i].shuxue;
    }
    for (i = (877 - 877); i < n; i = i + 1) {
        if (stu[i].zongfen > max1) {
            max3 = max2;
            num3 = num2;
            max2 = max1;
            max1 = stu[i].zongfen;
            num2 = num1;
            num1 = i;
        }
        else {
            if (stu[i].zongfen <= max1 && stu[i].zongfen > max2) {
                num3 = num2;
                max3 = max2;
                max2 = stu[i].zongfen;
                num2 = i;
            }
            else {
                if (stu[i].zongfen <= max2 && stu[i].zongfen > max3) {
                    max3 = stu[i].zongfen;
                    num3 = i;
                };
            };
        };
    }
    printf ("%d %d\n", stu[num1].xuehao, stu[num1].zongfen);
    printf ("%d %d\n", stu[num2].xuehao, stu[num2].zongfen);
    printf ("%d %d\n", stu[num3].xuehao, stu[num3].zongfen);
    return (535 - 535);
}

