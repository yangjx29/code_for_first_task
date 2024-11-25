int main () {
    int n;
    int UAH54G769p1 [(100333 - 333)] = {(760 - 760)};
    int NqFXM56 [100000] = {(95 - 95)};
    int lexbNGd5RHa [(10512 - 512)] = {0};
    int VI2jh48 [10000] = {0};
    int *JBZy283aF9 = UAH54G769p1, *hzROZ2u = NqFXM56;
    int flag = 1;
    cin >> n;
    for (int I84h0yNRnY = 0;
    ; I84h0yNRnY = I84h0yNRnY +1) {
        cin >> *(JBZy283aF9 +I84h0yNRnY) >> *(hzROZ2u + I84h0yNRnY);
        if (*(JBZy283aF9 +I84h0yNRnY) == *(hzROZ2u + I84h0yNRnY) && *(JBZy283aF9 +I84h0yNRnY) == 0)
            break;
        lexbNGd5RHa[*(hzROZ2u + I84h0yNRnY)]++;
        VI2jh48[*(JBZy283aF9 +I84h0yNRnY)]++;
        if (lexbNGd5RHa[*(hzROZ2u + I84h0yNRnY)] == n - 1 && VI2jh48[*(hzROZ2u + I84h0yNRnY)] == 0) {
            flag = 0;
            cout << *(hzROZ2u + I84h0yNRnY);
        };
    }
    if (flag == 1)
        cout << "NOT FOUND";
    return 0;
}

