#ifndef TBOX_SHELL_TELNETD_H_20220127
#define TBOX_SHELL_TELNETD_H_20220127

#include "interface.h"
#include <tbox/event/loop.h>

namespace tbox::shell {

class Telnetd : public Connection {
  public:
    explicit Telnetd(event::Loop *wp_loop, ShellInteract *wp_shell);
    virtual ~Telnetd();

  public:
    bool initialize(const std::string &bind_addr);
    bool start();
    void stop();
    void cleanup();

  private:
    class Impl;
    Impl *impl_ = nullptr;
};


}

#endif //TBOX_SHELL_TELNETD_H_20220127
