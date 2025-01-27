/* //Body ka saman

const sections = {
        basicInfo: "Basic Info",
        workExp : "Work Experience",
        project : "Project",
        education :"Education",
        achievements :"Achievemnets",
        summary: "Summary",
        other:" Other"
    };
      const [resumeInformation,setResumeInformation] = useState({
        [sections.basicInfo]:{
            id: sections.basicInfo,
            title:sections.basicInfo,
            detail:{}
        },
        [sections.workExp]:{
            id :sections.workExp,
            title:sections.workExp,
            details:[],
        },
        [sections.project]:{
            id :sections.project,
            title:sections.project,
            details:[],
        },
        [sections.education]:{
            id :sections.education,
            title:sections.education,
            details:[],
        },
        [sections.achievements]:{
            id :sections.achievements,
            title:sections.achievements,
            points:[],
        },
        [sections.summary]:{
            id :sections.summary,
            title:sections.summary,
            detail:"",
        },
        [sections.other]:{
            id :sections.other,
            title:sections.other,
            detail:"",
        },
    });   */




    //Editor ka saman
 /* const sections = props.sections;
    const information = props.information;
    const [activeSectionkey, setActiveSectionKey] = useState(Object.keys(sections)[0]);
    const [activeInformation, setActiveInformation] = useState(
        information[sections[Object.keys(sections)[0]]]
    );
    const basicInfoBody = (
        <div className={StyleSheet.detail}>
            <div className={StyleSheet.row}>
                <InputControl
                    Lable="Name"
                    placeholder="Enter your full name eg. Dain Levo"
                />
                <InputControl
                    Lable="Title"
                    placeholder="Enter  eg. Front-End Developer"
                />
            </div>
            <div className={StyleSheet.row}>
                <InputControl
                    Lable="Linkedin Link"
                    placeholder="Enter Linkedin profile link"
                />

                <InputControl
                    Lable="Github Link"
                    placeholder="Enter github profile"
                />
            </div>
            <div className={StyleSheet.row}>
                <InputControl
                    Lable="Email"
                    placeholder="Enter your email"
                />
                <InputControl
                    Lable="Phone Number"
                    placeholder="Enter your number"
                />
            </div>
        </div>
    );

    const workExBody = (<div className={StyleSheet.detail}>
        <div className={StyleSheet.row}>
            <InputControl
                Lable="Title"
                placeholder="Enter title eg. Front-End Developer"
            />

            <InputControl
                Lable="Company Name"
                placeholder="Enter company name eg. Amazon"
            />
        </div>
        <div className={StyleSheet.row}>
            <InputControl
                Lable="Certificate Link"
                placeholder="Enter certificate link"
            />

            <InputControl
                Lable="Location"
                placeholder="Enter location eg. Remote"
            />
        </div>
        <div className={StyleSheet.row}>
            <InputControl
                Lable="Start Date"
                type="date"
                placeholder="Enter start date of work"
            />

            <InputControl
                Lable="Last date of work"
                type="date"
                placeholder="Enter last date of work"
            />
        </div>
        <div className={StyleSheet.coloum}>
            <label>Enter your work discription</label>
            <InputControl placeholder="Line 1" />
            <InputControl placeholder="Line 2" />
            <InputControl placeholder="Line 3" />
        </div>
    </div>
    );
    const projectBody = (
        <div className={StyleSheet.detail}>
            <div className={StyleSheet.row}>
                <InputControl
                    Lable="Title"
                    placeholder="Enter title eg. Chat App"
                />

                <InputControl
                    Lable="Overview"
                    placeholder="Enter basic overview of project"
                />
            </div>
            <div className={StyleSheet.row}>
                <InputControl
                    Lable="Deployed Link"
                    placeholder="Enter deployed link of project"
                />

                <InputControl
                    Lable="Github Link"
                    placeholder="Enter github link of project "
                />
            </div>
            <div className={StyleSheet.coloum}>
                <label>Enter project discription</label>
                <InputControl placeholder="Line 1" />
                <InputControl placeholder="Line 2" />
                <InputControl placeholder="Line 3" />
                <InputControl placeholder="Line 4" />
            </div>
        </div>
    );
    const educationBody = (
        <div className={StyleSheet.detail}>
            <div className={StyleSheet.row}>
                <InputControl
                    Lable="Title"
                    placeholder="Enter title eg. B-tech"
                />

                <InputControl
                    Lable="College/School Name"
                    placeholder="Enter your colloege or school name"
                />
            </div>
            <div className={StyleSheet.row}>
                <InputControl
                    Lable="Start Date"
                    type="date"
                    placeholder="Enter start date of this education"
                />

                <InputControl
                    Lable="Last date of work"
                    type="date"
                    placeholder="Enter last date of this education"
                />
            </div>
        </div>
    );

    const achievmentsBody = (
        <div className={StyleSheet.detail}>
            <div className={StyleSheet.coloum}>
                <label>List your achievments</label>
                <InputControl placeholder="Line 1" />
                <InputControl placeholder="Line 2" />
                <InputControl placeholder="Line 3" />
                <InputControl placeholder="Line 4" />
            </div>
        </div>
    );
    const summaryBody = (
        <div className={StyleSheet.detail}>
            <InputControl
                Lable="Summary"
                placeholder="Enter your objective/summary"
            />
        </div>
    );
    const otherBody = (
        <div className={StyleSheet.detail}>
            <InputControl
                Lable="Other"
                placeholder="Enter something"
            />
        </div>
    );

    const generateBody = () => {
        switch (sections[activeSectionkey]) {
            case sections.basicInfo:return basicInfoBody;
            case sections.workExp:return workExBody;
            case sections.project:return projectBody;
            case sections.education:return educationBody;
            case sections.achievements:return achievmentsBody;
            case sections.summary:return summaryBody;
            case sections.other: return otherBody;
            default: return null;
        }
    };
 */
    /*   useEffect(() => {
          setActiveInformation(information[sections[activeSectionkey]])
      }, [activeSectionkey]); */
