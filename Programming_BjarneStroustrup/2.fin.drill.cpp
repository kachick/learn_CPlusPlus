// このへんでいきなりVisualStudio求められる・・・
// 基本MacOSX/Linuxでやってる以上しょうがないっぽい気がするので、適宜Consoleへ置換しつつ続ける
// まぁでもkeep_windows_openとやらでいきなりGUIというわけでもないようなので？あるいは適当に辻褄合わせてくれてるので？
// ここまでは特に問題無かった

#include "std_lib_facilities.h"

int main()
{
  cout << "Hello, World!\n";
  keep_window_open(); // 1文字入力まで待機
  return 0;
}