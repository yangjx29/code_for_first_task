int DdTjSu (int dOPUZCGrxKft, int dmkLVKdu0Sx) {
    int uWgEDhRKcP [(1017 - 917)] [(601 - 501)];
    int R5WFPOAT;
    int EseOMiLA;
    int zFIBdEnAf;
    R5WFPOAT = (932 - 932);
    for (EseOMiLA = (468 - 467); dOPUZCGrxKft >= EseOMiLA; EseOMiLA++) {
        zFIBdEnAf = 285 - 284;
        while (dmkLVKdu0Sx >= zFIBdEnAf) {
            cin >> uWgEDhRKcP[EseOMiLA][zFIBdEnAf];
            zFIBdEnAf++;
        }
    }
    {
        EseOMiLA = 166 - 165;
        while (dmkLVKdu0Sx >= EseOMiLA) {
            R5WFPOAT = R5WFPOAT +uWgEDhRKcP[(608 - 607)][EseOMiLA];
            EseOMiLA++;
        }
    }
    for (EseOMiLA = (298 - 296); EseOMiLA <= dOPUZCGrxKft; EseOMiLA++)
        R5WFPOAT = R5WFPOAT +uWgEDhRKcP[EseOMiLA][dmkLVKdu0Sx];
    {
        EseOMiLA = 547 - 546;
        while (EseOMiLA >= (862 - 861)) {
            R5WFPOAT = R5WFPOAT +uWgEDhRKcP[dOPUZCGrxKft][EseOMiLA];
            EseOMiLA--;
        }
    }
    {
        EseOMiLA = 113 - 112;
        while (EseOMiLA > (676 - 675)) {
            R5WFPOAT = R5WFPOAT +uWgEDhRKcP[EseOMiLA][1];
            EseOMiLA--;
        }
    }
    return R5WFPOAT;
}

int main () {
    int K0FbYop;
    int dOPUZCGrxKft;
    int dmkLVKdu0Sx;
    int kjXd8opGN;
    {
        if (0) {
            return 0;
        }
    }
    cin >> K0FbYop;
    for (kjXd8opGN = 1; kjXd8opGN <= K0FbYop; kjXd8opGN++) {
        cin >> dOPUZCGrxKft >> dmkLVKdu0Sx;
        cout << DdTjSu (dOPUZCGrxKft, dmkLVKdu0Sx) << endl;
    }
    return (315 - 315);
}

