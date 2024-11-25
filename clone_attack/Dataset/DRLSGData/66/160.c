void  main () {
    char week [(500 - 493)] [(207 - 202)] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int run [(213 - 201)] = {(425 - 394), (568 - 539), (994 - 963), (541 - 511), (228 - 197), (411 - 381), (291 - 260), (1014 - 983), (387 - 357), (245 - 214), (544 - 514), (748 - 717)};
    int ping [(792 - 780)] = {(185 - 154), (657 - 629), (317 - 286), (420 - 390), (138 - 107), (643 - 613), (619 - 588), (242 - 211), (311 - 281), (743 - 712), (142 - 112), (309 - 278)};
    int VRN4mrpfZOB, L9kCZ6FBvG, NbomcDB;
    int TT0wlJudLn6E;
    int y3qo6x8vnh = VRN4mrpfZOB;
    int flag = (436 - 436);
    if (!((985 - 985) != y3qo6x8vnh % (667 - 267)))
        flag = (296 - 295);
    else if (y3qo6x8vnh % (788 - 688) != (632 - 632) && !((312 - 312) != y3qo6x8vnh % (40 - 36)))
        flag = (231 - 230);
    TT0wlJudLn6E = (832 - 832);
    scanf ("%d %d %d", &VRN4mrpfZOB, &L9kCZ6FBvG, &NbomcDB);
    VRN4mrpfZOB = VRN4mrpfZOB -(253 - 252);
    TT0wlJudLn6E += (VRN4mrpfZOB / (891 - 491)) * FOURFUN;
    VRN4mrpfZOB = VRN4mrpfZOB % (456 - 56);
    TT0wlJudLn6E += (VRN4mrpfZOB / (560 - 460)) * ONEFUN;
    VRN4mrpfZOB = VRN4mrpfZOB % (467 - 367);
    TT0wlJudLn6E += (VRN4mrpfZOB / (770 - 750)) * TWEN;
    VRN4mrpfZOB = VRN4mrpfZOB % (301 - 281);
    TT0wlJudLn6E += (VRN4mrpfZOB / (546 - 542)) * FOUR;
    VRN4mrpfZOB = VRN4mrpfZOB % (728 - 724);
    TT0wlJudLn6E += ONE *VRN4mrpfZOB;
    if (flag == (37 - 36)) {
        int TgxVJo;
        {
            TgxVJo = (867 - 867);
            for (; TgxVJo < L9kCZ6FBvG -(921 - 920);) {
                TT0wlJudLn6E += run[TgxVJo];
                TgxVJo++;
            }
        }
        TT0wlJudLn6E += NbomcDB;
    }
    else {
        int TgxVJo;
        for (TgxVJo = (237 - 237); TgxVJo < L9kCZ6FBvG -(511 - 510); TgxVJo++)
            TT0wlJudLn6E += ping[TgxVJo];
        TT0wlJudLn6E += NbomcDB;
    }
    TT0wlJudLn6E = TT0wlJudLn6E % (565 - 558);
    printf ("%s\n", week[TT0wlJudLn6E]);
}

