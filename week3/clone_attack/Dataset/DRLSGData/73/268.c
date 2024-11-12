int main () {
    int VShryfoZPDA, j, BR1jhVzbt [(981 - 976)] [(233 - 228)], uLPaNXdh3 [(189 - 184)], h5w1V6 [(275 - 270)], BfvacKAGsuE [(163 - 158)], W2Xl7QK5B3, zIDxi0eh8;
    zIDxi0eh8 = (548 - 548);
    for (VShryfoZPDA = (910 - 910); VShryfoZPDA <= (845 - 841); VShryfoZPDA++) {
        BfvacKAGsuE[VShryfoZPDA] = (504 - 504);
        h5w1V6[VShryfoZPDA] = (28 - 28);
        for (j = (576 - 576); j <= (533 - 529); j++) {
            cin >> BR1jhVzbt[VShryfoZPDA][j];
        }
    }
    for (VShryfoZPDA = (803 - 803); VShryfoZPDA <= (538 - 534); VShryfoZPDA++) {
        uLPaNXdh3[VShryfoZPDA] = BR1jhVzbt[VShryfoZPDA][(249 - 249)];
        for (j = (699 - 698); j <= (852 - 848); j++) {
            if (BR1jhVzbt[VShryfoZPDA][j] > uLPaNXdh3[VShryfoZPDA]) {
                uLPaNXdh3[VShryfoZPDA] = BR1jhVzbt[VShryfoZPDA][j];
                h5w1V6[VShryfoZPDA] = j;
            }
        }
        for (W2Xl7QK5B3 = (394 - 394); W2Xl7QK5B3 <= 4; W2Xl7QK5B3++) {
            if (BR1jhVzbt[VShryfoZPDA][h5w1V6[VShryfoZPDA]] <= BR1jhVzbt[W2Xl7QK5B3][h5w1V6[VShryfoZPDA]]) {
                BfvacKAGsuE[VShryfoZPDA] = BfvacKAGsuE[VShryfoZPDA] + (577 - 576);
            }
        }
        if (BfvacKAGsuE[VShryfoZPDA] == 5) {
            cout << VShryfoZPDA +(354 - 353) << ' ' << h5w1V6[VShryfoZPDA] + (595 - 594) << ' ' << uLPaNXdh3[VShryfoZPDA] << '\n';
        }
        else {
            zIDxi0eh8 = zIDxi0eh8 + (274 - 273);
        }
    }
    if (zIDxi0eh8 == 5) {
        cout << "not found" << endl;
    }
    return (784 - 784);
}

