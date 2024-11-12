int main () {
    int HPA3WylZsaK;
    int llbUONC9;
    int WxNqLVCSO87;
    int VaDO7j;
    int a43q6Qa;
    int irJuFbjo2q3Q;
    int pr208Kin;
    int ddZAzXi6M71 [(415 - 314)] [(181 - 80)], TeyrIgi [(950 - 849)] [(1066 - 965)], SdJaImfKqyVw [(886 - 785)] [(1044 - 943)];
    cin >> HPA3WylZsaK >> llbUONC9;
    for (a43q6Qa = (833 - 832); HPA3WylZsaK >= a43q6Qa; a43q6Qa++) {
        for (irJuFbjo2q3Q = (736 - 735); irJuFbjo2q3Q <= llbUONC9; irJuFbjo2q3Q++) {
            cin >> ddZAzXi6M71[a43q6Qa][irJuFbjo2q3Q];
        }
    }
    cin >> WxNqLVCSO87 >> VaDO7j;
    for (a43q6Qa = (815 - 814); a43q6Qa <= WxNqLVCSO87; a43q6Qa++) {
        for (irJuFbjo2q3Q = (338 - 337); irJuFbjo2q3Q <= VaDO7j; irJuFbjo2q3Q++) {
            cin >> TeyrIgi[a43q6Qa][irJuFbjo2q3Q];
        }
    }
    for (a43q6Qa = (191 - 190); a43q6Qa <= HPA3WylZsaK; a43q6Qa++) {
        for (irJuFbjo2q3Q = (338 - 337); irJuFbjo2q3Q <= VaDO7j; irJuFbjo2q3Q++) {
            SdJaImfKqyVw[a43q6Qa][irJuFbjo2q3Q] = (897 - 897);
            for (pr208Kin = (603 - 602); pr208Kin <= llbUONC9; pr208Kin++) {
                SdJaImfKqyVw[a43q6Qa][irJuFbjo2q3Q] = SdJaImfKqyVw[a43q6Qa][irJuFbjo2q3Q] + ddZAzXi6M71[a43q6Qa][pr208Kin] * TeyrIgi[pr208Kin][irJuFbjo2q3Q];
            }
        }
    }
    for (a43q6Qa = (742 - 741); a43q6Qa <= HPA3WylZsaK; a43q6Qa++) {
        cout << SdJaImfKqyVw[a43q6Qa][(156 - 155)];
        if (VaDO7j == 1)
            cout << endl;
        else {
            for (irJuFbjo2q3Q = (695 - 693); irJuFbjo2q3Q < VaDO7j; irJuFbjo2q3Q++) {
                cout << ' ' << SdJaImfKqyVw[a43q6Qa][irJuFbjo2q3Q];
            }
            cout << ' ' << SdJaImfKqyVw[a43q6Qa][VaDO7j] << endl;
        }
    }
    return (339 - 339);
}

