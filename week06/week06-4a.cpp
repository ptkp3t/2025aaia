void setup(){
    size(600, 400);
}

float []x = new float[100];
float []y = new float[100];
int N = 0;

void draw(){
  background(#c0ffee);
  for(int i = 0; i < N; i++){
    ellipse(x[i], y[i], 8, 8);
    y[i] += 2;
    if(y[i] > 400){
      // 处理掉落的粒子
      for(int k = i; k < N - 1; k++){
        x[k] = x[k + 1];
        y[k] = y[k + 1];
      }
      N--;
    }
  }
}

void mousePressed(){
  // 如果 N 小于 100，才添加新的位置
  if(N < 100){
    x[N] = mouseX;
    y[N] = mouseY;
    N++;
  }
}
