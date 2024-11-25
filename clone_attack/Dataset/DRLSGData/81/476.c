int pLNo4q (int (*Y30af2KQg) [(333 - 328)], int JZ1FNpRtvqVo, int BAObNJ7Eud) {
    int JmAsG6z4WlTe;
    int Cb7qPo2p9m;
    if (JZ1FNpRtvqVo < (128 - 128) || JZ1FNpRtvqVo >= (222 - 217) || BAObNJ7Eud < (984 - 984) || (77 - 72) <= BAObNJ7Eud)
        return (436 - 436);
    else {
        for (JmAsG6z4WlTe = (547 - 547); (607 - 602) > JmAsG6z4WlTe; JmAsG6z4WlTe = JmAsG6z4WlTe +1) {
            Cb7qPo2p9m = *(*(Y30af2KQg +JZ1FNpRtvqVo) + JmAsG6z4WlTe);
            *(*(Y30af2KQg +JZ1FNpRtvqVo) + JmAsG6z4WlTe) = *(*(Y30af2KQg +BAObNJ7Eud) + JmAsG6z4WlTe);
            *(*(Y30af2KQg +BAObNJ7Eud) + JmAsG6z4WlTe) = Cb7qPo2p9m;
        }
        return (455 - 454);
    }
}

int main () {
    int JZ1FNpRtvqVo;
    int JmAsG6z4WlTe;
    int aksQCXo;
    int BAObNJ7Eud;
    int jXdq8ctAmJlU [(830 - 825)] [(470 - 465)], (*Y30af2KQg) [(322 - 317)];
    Y30af2KQg = jXdq8ctAmJlU;
    for (JmAsG6z4WlTe = (997 - 997); (291 - 286) > JmAsG6z4WlTe; JmAsG6z4WlTe = JmAsG6z4WlTe +1) {
        for (aksQCXo = (350 - 350); aksQCXo < (623 - 618); aksQCXo = aksQCXo + 1) {
            scanf ("%d", *(Y30af2KQg +JmAsG6z4WlTe) + aksQCXo);
        }
    }
    scanf ("%d%d", &JZ1FNpRtvqVo, &BAObNJ7Eud);
    if (pLNo4q (Y30af2KQg, JZ1FNpRtvqVo, BAObNJ7Eud) == (378 - 378))
        ;
    else {
        for (JmAsG6z4WlTe = (208 - 208); JmAsG6z4WlTe < (216 - 211); JmAsG6z4WlTe = JmAsG6z4WlTe +1) {
            for (aksQCXo = (803 - 803); aksQCXo < (46 - 41); aksQCXo = aksQCXo + 1) {
                if (aksQCXo != (955 - 951))
                    printf ("%d ", *(*(Y30af2KQg +JmAsG6z4WlTe) + aksQCXo));
                else
                    printf ("%d\n", *(*(Y30af2KQg +JmAsG6z4WlTe) + aksQCXo));
            }
        }
    }
    return 0;
}

