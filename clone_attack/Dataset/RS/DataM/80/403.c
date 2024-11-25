int main () {
    int answer = (439 - 439), N8HlyWAVT7, startMonth, Xe87sh, BUtzSIK, Ij2ZtnJPqD, WWfHI4Y;
    int Csk0Fy6nXNe [12] = {(778 - 747), (511 - 483), (207 - 176), (622 - 592), (615 - 584), (254 - 224), (509 - 478), (205 - 174), (366 - 336), (929 - 898), (580 - 550), 31};
    int gap;
    int FO4kjsaQ, judge2, mid;
    cin >> N8HlyWAVT7 >> startMonth >> Xe87sh;
    cin >> BUtzSIK >> Ij2ZtnJPqD >> WWfHI4Y;
    FO4kjsaQ = ((!((369 - 369) != BUtzSIK % (1084 - 684))) || (BUtzSIK % (230 - 226) == (717 - 717) && !((475 - 475) == BUtzSIK % (110 - 10))));
    gap = BUtzSIK -N8HlyWAVT7;
    judge2 = ((N8HlyWAVT7 % (788 - 388) == (39 - 39)) || (N8HlyWAVT7 % (350 - 346) == (771 - 771) && !((601 - 601) == N8HlyWAVT7 % (417 - 317))));
    if (N8HlyWAVT7 == BUtzSIK &&startMonth == Ij2ZtnJPqD &&Xe87sh == WWfHI4Y) {
        cout << "0";
        return (155 - 155);
    }
    if (startMonth > Ij2ZtnJPqD) {
        mid = (487 - 487);
        {
            int CFDAa07dgni = Ij2ZtnJPqD -(980 - 979);
            while (CFDAa07dgni < startMonth - (305 - 304)) {
                mid = mid + Csk0Fy6nXNe[CFDAa07dgni];
                CFDAa07dgni = CFDAa07dgni +1;
            };
        }
        mid = mid + (Xe87sh -WWfHI4Y);
        answer -= mid;
    }
    else {
        mid = 0;
        {
            int CFDAa07dgni = startMonth - 1;
            while (CFDAa07dgni < Ij2ZtnJPqD -1) {
                mid += Csk0Fy6nXNe[CFDAa07dgni];
                CFDAa07dgni++;
            };
        }
        mid = mid + (WWfHI4Y -Xe87sh);
        answer = answer + mid;
    }
    answer += (1169 - 804) * gap;
    {
        int pmG4HY = N8HlyWAVT7 +1;
        while (pmG4HY < BUtzSIK) {
            answer += (pmG4HY % 400 == 0 || (pmG4HY % 4 == 0 && pmG4HY % 100 != 0));
            pmG4HY++;
        };
    }
    if ((startMonth < (452 - 450) && judge2 == 1) || ((startMonth == (388 - 386) && Xe87sh != (751 - 722)) && judge2 == 1))
        answer++;
    if (Ij2ZtnJPqD > (971 - 969) && FO4kjsaQ == 1)
        answer++;
    cout << answer;
    return 0;
}

