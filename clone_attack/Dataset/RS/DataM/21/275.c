int main () {
    int A0ImjROXCQ3 = (530 - 530);
    int FXoUZnbMNuD [(404 - 104)], CPwVORh6lnq = (571 - 571), PICUuv4Zl;
    double  jKV6dy, v28NTOvh6Gc [300], VaQlmtp6KX4 = (954.0 - 954.0);
    int Mo5vWA94z = (726 - 726), F3k6JDQp2I = (70 - 70);
    int vxfzm03cyF;
    vxfzm03cyF = (759 - 759);
    cin >> A0ImjROXCQ3;
    for (Mo5vWA94z = 0; A0ImjROXCQ3 > Mo5vWA94z; Mo5vWA94z = Mo5vWA94z +1) {
        cin >> FXoUZnbMNuD[Mo5vWA94z];
        CPwVORh6lnq += FXoUZnbMNuD[Mo5vWA94z];
    }
    jKV6dy = (double ) CPwVORh6lnq / (double ) A0ImjROXCQ3;
    for (Mo5vWA94z = 0; Mo5vWA94z < A0ImjROXCQ3 -(979 - 978); Mo5vWA94z = Mo5vWA94z +1)
        for (F3k6JDQp2I = Mo5vWA94z +(890 - 889); F3k6JDQp2I < A0ImjROXCQ3; F3k6JDQp2I = F3k6JDQp2I +1)
            if (FXoUZnbMNuD[F3k6JDQp2I] < FXoUZnbMNuD[Mo5vWA94z]) {
                PICUuv4Zl = FXoUZnbMNuD[Mo5vWA94z];
                FXoUZnbMNuD[Mo5vWA94z] = FXoUZnbMNuD[F3k6JDQp2I];
                FXoUZnbMNuD[F3k6JDQp2I] = PICUuv4Zl;
            }
    for (Mo5vWA94z = 0; Mo5vWA94z < A0ImjROXCQ3; Mo5vWA94z++)
        v28NTOvh6Gc[Mo5vWA94z] = (FXoUZnbMNuD[Mo5vWA94z] - jKV6dy) * (FXoUZnbMNuD[Mo5vWA94z] - jKV6dy);
    VaQlmtp6KX4 = v28NTOvh6Gc[0];
    for (Mo5vWA94z = 0; Mo5vWA94z < A0ImjROXCQ3; Mo5vWA94z++)
        if (v28NTOvh6Gc[Mo5vWA94z] >= VaQlmtp6KX4) {
            vxfzm03cyF = vxfzm03cyF + 1;
            VaQlmtp6KX4 = v28NTOvh6Gc[Mo5vWA94z];
        }
    if (vxfzm03cyF == 1) {
        for (Mo5vWA94z = 0; Mo5vWA94z < A0ImjROXCQ3; Mo5vWA94z++)
            if (v28NTOvh6Gc[Mo5vWA94z] == VaQlmtp6KX4)
                cout << FXoUZnbMNuD[Mo5vWA94z];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        if (vxfzm03cyF > 1) {
            {
                Mo5vWA94z = 0;
                while (Mo5vWA94z < A0ImjROXCQ3) {
                    if (v28NTOvh6Gc[Mo5vWA94z] == VaQlmtp6KX4) {
                        F3k6JDQp2I = Mo5vWA94z;
                        cout << FXoUZnbMNuD[F3k6JDQp2I];
                        break;
                    }
                    Mo5vWA94z = Mo5vWA94z +1;
                };
            }
            for (Mo5vWA94z = F3k6JDQp2I +1; Mo5vWA94z < A0ImjROXCQ3; Mo5vWA94z++)
                if (v28NTOvh6Gc[Mo5vWA94z] == VaQlmtp6KX4)
                    cout << "," << FXoUZnbMNuD[Mo5vWA94z];
        };
    }
    return 0;
}

