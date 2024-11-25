int main () {
    double  Z7aLnUGY4X [81] = {0};
    double  r41vHay;
    int DIq4sWoL05Y;
    int YBSzhCu81M;
    int tUITyPis3;
    int ydOVCJvqr102;
    char N3yCDAiJqX [(865 - 824)] [7];
    int YpVHl4Mz1o;
    cin >> YpVHl4Mz1o;
    for (tUITyPis3 = (785 - 784); YpVHl4Mz1o >= tUITyPis3; tUITyPis3 = tUITyPis3 + (122 - 121)) {
        cin >> N3yCDAiJqX[tUITyPis3] >> Z7aLnUGY4X[tUITyPis3];
    }
    ydOVCJvqr102 = 0;
    YBSzhCu81M = (978 - 977);
    {
        tUITyPis3 = (696 - 695);
        for (; tUITyPis3 <= YpVHl4Mz1o;) {
            if (!('m' != N3yCDAiJqX[tUITyPis3][0])) {
                Z7aLnUGY4X[YBSzhCu81M +YpVHl4Mz1o] = Z7aLnUGY4X[tUITyPis3];
                YBSzhCu81M = YBSzhCu81M +(944 - 943);
            }
            if (!('f' != N3yCDAiJqX[tUITyPis3][0])) {
                Z7aLnUGY4X[(625 - 623) * YpVHl4Mz1o -ydOVCJvqr102] = Z7aLnUGY4X[tUITyPis3];
                ydOVCJvqr102 = ydOVCJvqr102 + (142 - 141);
            }
            tUITyPis3 = tUITyPis3 + (36 - 35);
        }
    }
    {
        tUITyPis3 = (292 - 291) + YpVHl4Mz1o;
        for (; YBSzhCu81M +YpVHl4Mz1o-1 >= tUITyPis3;) {
            for (DIq4sWoL05Y = YBSzhCu81M +YpVHl4Mz1o-1; DIq4sWoL05Y > tUITyPis3; DIq4sWoL05Y = DIq4sWoL05Y -1) {
                if (Z7aLnUGY4X[DIq4sWoL05Y] < Z7aLnUGY4X[DIq4sWoL05Y -1]) {
                    r41vHay = Z7aLnUGY4X[DIq4sWoL05Y];
                    Z7aLnUGY4X[DIq4sWoL05Y] = Z7aLnUGY4X[DIq4sWoL05Y -1];
                    Z7aLnUGY4X[DIq4sWoL05Y -1] = r41vHay;
                }
            }
            tUITyPis3 = tUITyPis3 + 1;
        }
    }
    for (tUITyPis3 = YBSzhCu81M +YpVHl4Mz1o; tUITyPis3 <= 2 * YpVHl4Mz1o; tUITyPis3 = tUITyPis3 + 1) {
        for (DIq4sWoL05Y = 2 * YpVHl4Mz1o; DIq4sWoL05Y > tUITyPis3; DIq4sWoL05Y = DIq4sWoL05Y -1) {
            if (Z7aLnUGY4X[DIq4sWoL05Y] > Z7aLnUGY4X[DIq4sWoL05Y -1]) {
                r41vHay = Z7aLnUGY4X[DIq4sWoL05Y];
                Z7aLnUGY4X[DIq4sWoL05Y] = Z7aLnUGY4X[DIq4sWoL05Y -1];
                Z7aLnUGY4X[DIq4sWoL05Y -1] = r41vHay;
            }
        }
    }
    for (tUITyPis3 = YpVHl4Mz1o +1; tUITyPis3 < 2 * YpVHl4Mz1o; tUITyPis3 = tUITyPis3 + 1) {
        cout << fixed;
        cout << setprecision (2) << Z7aLnUGY4X[tUITyPis3] << " ";
    }
    cout << fixed;
    cout << setprecision (2) << Z7aLnUGY4X[2 * YpVHl4Mz1o];
    return 0;
}

