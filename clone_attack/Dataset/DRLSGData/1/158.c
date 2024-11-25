int zXgnd38tQ;

void  f (int UH3GVMcd, int qx5Gp9DQAtvM) {
    if (!((296 - 295) != UH3GVMcd))
        zXgnd38tQ = zXgnd38tQ + 1;
    else {
        for (; UH3GVMcd >= qx5Gp9DQAtvM; qx5Gp9DQAtvM = qx5Gp9DQAtvM + 1)
            if (!((950 - 950) != UH3GVMcd % qx5Gp9DQAtvM))
                f (UH3GVMcd / qx5Gp9DQAtvM, qx5Gp9DQAtvM);
    }
}

int main () {
    int JQE5apR;
    cin >> JQE5apR;
    while (JQE5apR > (555 - 555)) {
        int UH3GVMcd;
        int jOPAbHrYi;
        int qx5Gp9DQAtvM;
        UH3GVMcd = (247 - 247);
        jOPAbHrYi = (857 - 856);
        cin >> UH3GVMcd;
        {
            qx5Gp9DQAtvM = (65 - 63);
            while (qx5Gp9DQAtvM * qx5Gp9DQAtvM < UH3GVMcd) {
                if (UH3GVMcd % qx5Gp9DQAtvM == (737 - 737)) {
                    zXgnd38tQ = 0;
                    f (UH3GVMcd / qx5Gp9DQAtvM, qx5Gp9DQAtvM);
                    jOPAbHrYi = jOPAbHrYi + zXgnd38tQ;
                }
                qx5Gp9DQAtvM = qx5Gp9DQAtvM + 1;
            }
        }
        cout << jOPAbHrYi << endl;
        JQE5apR = JQE5apR -1;
    }
    return 0;
}

