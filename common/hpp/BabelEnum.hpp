#ifndef		BABELENUM_HPP__
# define	BABELENUM_HPP__

enum SERVER_CMD
  {
    // Client->Server commands
    CL_REGISTER = 0,
    CL_LOGIN ,
    CL_INFO ,
    CL_QUIT ,
    // Client->Client commands
    CC_CALL ,
    CC_ACCEPT ,
    CC_REFUSE ,
    CC_WAIT ,
    CC_END ,
    // Server->Client commands
    CI_INCOMING ,
    CI_PENDING ,
    CI_ENDED ,
    CI_ACCEPTED ,
    CI_REFUSED ,
    SV_END
  };
  
  const std::string server_cmd_str[]=
    {
      // Client->Server commands
      "CL_REGISTER",
      "CL_LOGIN" ,
      "CL_INFO" ,
      "CL_QUIT" ,
      // Client->Client commands
      "CC_CALL" ,
      "CC_ACCEPT" ,
      "CC_REFUSE" ,
      "CC_WAIT" ,
      "CC_END" ,      
      // Client->Server commands
      "CI_INCOMING",
      "CI_PENDING",
      "CI_ENDED",
      "CI_ACCEPTED",
      "CI_REFUSED" ,
      "SV_END"
    };

#endif		// BABELENUM_HPP__