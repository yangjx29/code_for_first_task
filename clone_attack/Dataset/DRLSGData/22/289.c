int main () {
    int UO07JxsuYK;
    unsigned  int fnNUrY63IQW [(1152 - 851)], I7PiFM14a9B = (844 - 844), Z2MuTeFvm = (762 - 762);
    char Il9NH7VIKu;
    int NmTcCL35xQn0;
    Il9NH7VIKu = '0';
    NmTcCL35xQn0 = (732 - 732);
    for (; Il9NH7VIKu != '\n';) {
        scanf ("%d%c", &fnNUrY63IQW[NmTcCL35xQn0], &Il9NH7VIKu);
        NmTcCL35xQn0++;
    }
    for (UO07JxsuYK = (522 - 522); UO07JxsuYK < NmTcCL35xQn0; UO07JxsuYK++) {
        if (I7PiFM14a9B < fnNUrY63IQW[UO07JxsuYK]) {
            Z2MuTeFvm = I7PiFM14a9B;
            I7PiFM14a9B = fnNUrY63IQW[UO07JxsuYK];
        }
        else if (fnNUrY63IQW[UO07JxsuYK] < I7PiFM14a9B &&Z2MuTeFvm < fnNUrY63IQW[UO07JxsuYK])
            Z2MuTeFvm = fnNUrY63IQW[UO07JxsuYK];
        else
            continue;
    }
    if (Z2MuTeFvm)
        printf ("%d", Z2MuTeFvm);
    else
        ;
    return 0;
}

