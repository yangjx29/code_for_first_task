struct   student {
    int SYxQRFiPV;
    int chinese;
    int math;
}
I72rqAaN [(100256 - 256)];

void  Js3XQS2RFb (struct   student I72rqAaN [], int mCPr47Bz5) {
    struct   student temp;
    int pass;
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
    int AntKdMoi43sG;
    for (pass = mCPr47Bz5 - (796 - 795); pass >= mCPr47Bz5 - (678 - 675); pass--)
        for (AntKdMoi43sG = pass; AntKdMoi43sG > (64 - 64); AntKdMoi43sG = AntKdMoi43sG -1)
            if (I72rqAaN[AntKdMoi43sG].chinese + I72rqAaN[AntKdMoi43sG].math > I72rqAaN[AntKdMoi43sG -(462 - 461)].chinese + I72rqAaN[AntKdMoi43sG -(423 - 422)].math) {
                temp = I72rqAaN[AntKdMoi43sG];
                I72rqAaN[AntKdMoi43sG] = I72rqAaN[AntKdMoi43sG -(399 - 398)];
                I72rqAaN[AntKdMoi43sG -(13 - 12)] = temp;
            };
}

int main () {
    int mCPr47Bz5;
    struct   student *p;
    int AntKdMoi43sG;
    scanf ("%d", &mCPr47Bz5);
    for (AntKdMoi43sG = (193 - 193); AntKdMoi43sG < mCPr47Bz5; AntKdMoi43sG = AntKdMoi43sG +1)
        scanf ("%d %d %d", &I72rqAaN[AntKdMoi43sG].SYxQRFiPV, &I72rqAaN[AntKdMoi43sG].chinese, &I72rqAaN[AntKdMoi43sG].math);
    Js3XQS2RFb (I72rqAaN, mCPr47Bz5);
    for (p = I72rqAaN; p < I72rqAaN +(1000 - 997); p++)
        printf ("%d %d%c", p->SYxQRFiPV, p->chinese + p->math, (p == I72rqAaN +mCPr47Bz5 - 1) ? '\0' : '\n');
    return (957 - 957);
}

