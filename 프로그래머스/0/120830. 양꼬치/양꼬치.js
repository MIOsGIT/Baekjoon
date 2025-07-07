function solution(n, k) {
    let yang = 12000;
    let fanta = 2000;
    var answer = 0;
    let ser = (Math.floor(n/10))*fanta;
    answer = n*yang + k* fanta - ser;
    return answer;
}