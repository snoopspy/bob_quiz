#include <QThread>
#include <QUdpSocket>

int main()
{
  static const QString ip = "192.168.32.255";
  while (true) {
    QUdpSocket socket;
    socket.connectToHost(ip, 1234);
    socket.write("quiz0(zero)!!! http://test.gilgil.net/quiz0/67Wk67mEIOychO2CpCDrqZjthqDrnoDsl5Ag7J206rK966y47J20IOyXhuuLpCDsnbTqsoPrk6TslYQu.php");
    QThread::sleep(10);
    socket.close();
  }
  return 0;
}
