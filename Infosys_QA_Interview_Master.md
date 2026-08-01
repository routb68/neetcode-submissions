# 🎯 Infosys QA Automation — Complete Interview Master Guide
### 156 questions · sorted, prioritised, answered, with code

> **Profile this guide is written for:** ~2 years QA Automation · Automobile domain · Java + Selenium + TestNG **and** Playwright (TypeScript)
>
> **Importance key:** 🔴 **P0** = asked ~90%+ of the time · 🟠 **P1** = ~60–70% · 🟡 **P2** = ~30–40% · 🔵 **P3** = rare
> **Round tags:** `[L1]` technical screen · `[L2]` deep technical · `[MR]` managerial · `[HR]` HR
> **⏱** = how long your *spoken* answer should be. Going over is the most common way candidates lose an Infosys panel.

---

## 📖 Table of Contents

| Part | Topic | Qns | Priority weight |
|---|---|---|---|
| **0** | [How the Infosys QA interview actually runs](#part-0--how-the-infosys-qa-interview-actually-runs) | — | Read first |
| **★** | [Your Project Baseline — memorise this](#-your-project-baseline--memorise-this-block) | — | 🔴 Foundation |
| **1** | [Self-Introduction, Project & Role](#part-1--self-introduction-project--role) | 5 | 🔴🔴🔴 |
| **2** | [Framework Architecture & Design](#part-2--framework-architecture--design) | 9 | 🔴🔴🔴 |
| **3** | [Core Java — Theory](#part-3--core-java--theory) | 15 | 🔴🔴 |
| **4** | [Java Coding Programs (live editor)](#part-4--java-coding-programs-live-editor) | 10 | 🔴🔴 |
| **5** | [Selenium — Concepts & Handling](#part-5--selenium--concepts--handling) | 23 | 🔴🔴🔴 |
| **6** | [TestNG · Maven · CI/CD](#part-6--testng--maven--cicd) | 13 | 🔴🔴 |
| **7** | [API Testing](#part-7--api-testing) | 15 | 🟠🟠 |
| **8** | [SQL & Database](#part-8--sql--database) | 6 | 🟠 |
| **9** | [Manual QA · STLC · Test Design](#part-9--manual-qa--stlc--test-design-techniques) | 26 | 🟠🟠 |
| **10** | [Agile & Process](#part-10--agile--process) | 7 | 🟠 |
| **11** | [Scenario, Debugging & Behavioural](#part-11--scenario-debugging--behavioural) | 12 | 🔴🔴 |
| **12** | [Playwright — all 50 questions](#part-12--playwright--all-50-questions) | 50 | 🟠 |
| **13** | [Appendix: rapid-fire, code bank, 3-day plan](#part-13--appendix) | — | Night before |

**If you only have one evening:** Part 1 → Part 2 (Q6) → Part 4 → Part 5 (waits, frames, windows) → Part 11.

---

# ⚠️ Read this before anything else

Everything below is a **template with placeholders**, not a script to recite. Replace `AutoConnect`, the module names and every number with **your actual project**. Infosys panels drill down hard — if you claim you built a Jenkins pipeline you've never touched, question 3 of the follow-up chain will expose it, and a caught exaggeration costs you more than an honest "I haven't worked on that directly, but I know how it works."

**The honest-but-strong formula:** *"I own X. I contributed Y. I've worked alongside Z."* All three are strong answers. Only the fabricated fourth one is fatal.

---

# Part 0 — How the Infosys QA interview actually runs

## The round map

| Round | Length | Who | What they're really scoring |
|---|---|---|---|
| **L1 — Technical Screen** | 30–45 min | Senior QA / Tech Lead | Breadth. Can you talk fluently about Selenium, Java basics, your framework? Are your basics shaky? |
| **L2 — Deep Technical** | 45–60 min | Project Lead / Architect | Depth + live coding. They pick 2–3 things from L1 and dig until you hit your limit. Live editor coding is near-guaranteed. |
| **MR — Managerial** | 30 min | Delivery Manager | Ownership, Agile process, conflict, estimation, whether you'd survive on a client-facing project |
| **HR** | 15–20 min | HR | Notice period, location flexibility, salary, stability |

## Four scoring realities

1. **Your self-intro sets the difficulty of the whole interview.** Every technology you name becomes a valid question. Name Docker casually and you'll be asked about Docker. **Only name what you can defend for 3 follow-ups.**
2. **They will ask "how did *YOU* use this in *YOUR* project?"** after almost every theory answer. A textbook definition with no project anchor scores about half marks. Build the reflex: *definition → "in my project…" → concrete example.*
3. **Live coding is graded on approach, not perfection.** Speak while you type. A candidate who narrates their logic and hits a small syntax error beats a silent candidate with clean code.
4. **"I don't know" is a legal move — once or twice.** Correct form: *"I haven't worked on that directly. My understanding is [best attempt]. Is that the right direction?"* Bluffing is the failure mode, not admitting a gap.

## Three rules for every answer

- **Rule of 3:** structure everything as three points. It sounds organised and stops you rambling.
- **Land the plane.** Finish and stop talking. Silence after a complete answer reads as confidence; filling it reads as anxiety.
- **Always return to the project.** Theory → "In AutoConnect, we hit exactly this when…" That single pivot is what separates a 2-year candidate from a fresher who read a blog.

---

# 📌 Your Project Baseline — memorise this block

Every answer in all 7 files hangs off this. Learn it until it's automatic, with **your** real details swapped in.

| Field | Fill with yours |
|---|---|
| **Project name** | AutoConnect — Vehicle Sales & Service Platform |
| **Client type** | Automotive OEM + its dealer network |
| **What it does** | Customers configure a vehicle online (variant → colour → accessories), see on-road price, book a test drive, pay a booking amount, and schedule servicing. Dealers manage inventory, bookings and service slots through a dealer portal. |
| **Modules I test** | Vehicle Configurator · On-Road Price & Offers engine · Test-Drive Booking · Booking Payment · Service Appointment · Dealer Portal (inventory) |
| **Team** | 12 total — 8 dev, 3 QA (1 lead + me + 1 manual), 1 BA. Scrum, 2-week sprints |
| **My tenure** | ~2 years on this project |
| **Stack — legacy portal** | Java 11 · Selenium 4 · TestNG · Maven · REST Assured · Extent Reports · Apache POI · Jenkins |
| **Stack — new customer app** | Playwright + TypeScript · built-in HTML reporter · GitHub Actions |
| **Suite size** | ~420 UI + ~180 API cases (**use your real number**) |
| **Regression cycle** | Was ~3 days manual → now ~2.5 hrs on 4 parallel threads |
| **My headline impact** | Cut regression from 3 days to under 3 hours; caught a pricing-offer stacking defect pre-release |

### Why two frameworks (memorise the one-liner)

> *"The dealer portal is an older JSP application already covered by a mature Selenium suite, so rewriting it had no business case. The new customer-facing configurator is a React SPA — heavily dynamic, lots of async pricing calls — and Playwright's auto-waiting and tracing made it far more stable there. So it was a per-application decision, not a migration."*

This one paragraph turns "why do you know both?" from a suspicious question into a point in your favour: it shows **tool selection judgement**, which is a lead-level trait.

---

# Part 1 — Self-Introduction, Project & Role

## Q1. Tell me about yourself. 🔴 **P0** `[L1] [L2] [MR] [HR]` ⏱ **75–90 sec**

**Why they ask.** This is not small talk. They're deciding which topics to attack, whether you can communicate with a client, and whether you sound like you actually did the work. **It's the single highest-leverage answer in the entire interview.**

**Say this** *(5-block structure: Who → Project → Stack → What I did → Where I'm going)*

> "I'm [Name], a QA Automation Engineer with around two years of experience, currently working on an automotive platform called AutoConnect for an OEM and its dealer network.
>
> The product has two sides — a customer-facing app where users configure a vehicle, check the on-road price, book a test drive and pay a booking amount; and a dealer portal where dealers manage inventory and service slots.
>
> On the tech side I work across two stacks. For the dealer portal we have a hybrid Selenium framework in Java with TestNG, Maven and REST Assured. For the newer customer app I build tests in Playwright with TypeScript.
>
> My core responsibility is the Configurator and Pricing modules. I own around 160 automated cases there, I built out the data-driven layer using Apache POI so the pricing combinations come from Excel rather than being hardcoded, and I wrote the Playwright suite for the configurator from scratch. I also do API validation with REST Assured for the pricing and booking services.
>
> The result I'm most proud of is that our regression cycle went from about three days of manual effort to under three hours running in parallel through Jenkins — and I'm now looking to grow into deeper framework ownership and CI/CD, which is what drew me to this role."

**Follow-up traps**

| They'll ask | Answer with |
|---|---|
| *"Which of the two do you prefer?"* | "Playwright for modern SPAs — auto-waiting removed most of our flakiness. But Selenium has the wider ecosystem and grid support, so it depends on the app." |
| *"You said you built the Playwright suite from scratch — walk me through the config."* | See **Q13**. Be ready. Don't say "from scratch" unless you can do this. |
| *"What's the hardest bug you found?"* | Have the offer-stacking defect ready (full version in **File 5**). |

**❌ Don't say:** where you were born, your school marks, your family, "I'm a hard worker and quick learner."
**✅ Do say:** experience → project → stack → *your* contribution → one metric → why this role.

---

## Q2. Describe your project and your role. 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Why they ask.** They're checking **domain understanding**. A tester who can explain *why* the business needs a feature writes better test cases than one who only knows the click path. This is where automobile domain knowledge is an actual advantage — it's less common than banking or e-commerce, so it's memorable.

**Say this**

> "AutoConnect digitises the vehicle buying and ownership journey.
>
> **The customer flow:** a user picks a model, then configures it — variant, then colour, then optional accessories. Each selection recalculates the on-road price, which is not a simple sum: it's ex-showroom price, plus RTO and road tax that vary by state, plus insurance, plus accessories, minus any applicable offers like an exchange bonus, a corporate discount or a festive scheme. They then pick a dealer, book a test drive, or pay a booking amount to reserve the vehicle.
>
> **The dealer flow:** dealers see live inventory by variant and colour, manage incoming bookings, and open or close service slots.
>
> **My role:** I'm responsible for QA of the Configurator and Pricing modules end to end — I write and review test cases, automate the regression pack, do API-level validation of the pricing and booking services, raise and track defects in Jira, and give the sign-off for my modules before each release.
>
> The interesting testing challenge is combinatorial explosion. Six models × four to five variants × eight colours × a dozen accessories, across multiple states with different tax slabs — you can't test every path, so we use pairwise and boundary-value techniques to get coverage with a sane number of cases."

**Why that last paragraph matters.** You've just pre-answered the test-design-technique questions *and* demonstrated you think about coverage economics. Panels notice this.

---

## Q3. What are your roles and responsibilities? 🔴 **P0** `[L1] [MR]` ⏱ **60 sec**

**Why they ask.** Q2 was about the product; this is about **you specifically**. They want a day-in-the-life answer, and they want to distinguish "I ran the scripts someone else wrote" from "I own something."

**Say this** — walk the sprint, not a bullet list

> "I'll walk it through a sprint, since that's how the work is actually shaped.
>
> **Sprint start:** I attend grooming and refinement. My job there is to poke holes in the acceptance criteria early — for a pricing story I'll ask which states are in scope, whether offers can stack, and what happens if two offers are both valid. Catching an ambiguity in grooming is far cheaper than catching it in UAT.
>
> **Early sprint:** I design test cases in Zephyr, do impact analysis on which existing regression cases the change touches, and prepare test data.
>
> **Mid sprint:** as builds land I do functional and integration testing, log defects in Jira with logs and screenshots, and retest fixes.
>
> **Late sprint:** I automate the stabilised cases — Selenium for the dealer portal, Playwright for the configurator — and add them to the regression suite. I also maintain existing scripts when locators or flows change.
>
> **Release:** I trigger the regression suite through Jenkins, triage failures into genuine defects versus script issues, share the Extent report, and give sign-off for my modules.
>
> **Continuous:** daily stand-up, defect triage with dev leads, and sprint retrospective."

**Follow-up trap:** *"What percentage of your time is manual versus automation?"*
> "Roughly 60% automation, 40% manual and analysis. New features get tested manually first — automating an unstable feature just creates rework. Once behaviour settles, it goes into the suite."

That answer is more credible than "100% automation" and shows judgement.

---

## Q4. What type of test cases do you automate? / How do you choose what to automate? 🟠 **P1** `[L1] [L2]` ⏱ **60 sec**

**Why they ask.** Testing your **prioritisation judgement**. Wrong answer: "we automate everything."

**Say this — the four filters I apply**

1. **Repetition** — anything that runs every regression cycle. Login, configurator happy paths, on-road price calculation, booking flow. Highest ROI.
2. **Business criticality** — revenue and trust paths. Booking payment, price accuracy. A wrong on-road price is a legal and reputational problem, so these are automated first and run as the smoke pack.
3. **Data-driven breadth** — anywhere the same flow repeats with many data combinations. Price calculation across state/variant/accessory combinations is the perfect example — that's 80 manual cases collapsed into one script plus an Excel sheet.
4. **Stability** — the feature and its locators must have settled. I don't automate against a UI that's still being redesigned.

**What I deliberately don't automate**

- One-time or throwaway validations
- Exploratory and usability testing — needs human judgement
- Captcha, OTP and payment-gateway 3D-secure pages (we stub or use test-mode gateways instead)
- Visual look-and-feel — better handled by Playwright's screenshot comparison than by assertions
- Features with fewer than ~2 planned executions — maintenance cost exceeds the saving

**Closing line:** *"Roughly 65% of our regression pack is automated. The remaining 35% is intentionally manual, not backlog."*

---

## Q5. What exactly did YOU build? 🔴 **P0** `[L2]` ⏱ **60 sec**

**Why they ask.** The credibility check. At 2 years, claiming to have architected everything alone is a red flag; claiming to have built nothing is worse.

**Say this — the ownership ladder, in this order**

> "Three levels, to be precise about it.
>
> **Built from scratch:** the Playwright suite for the configurator module — config, page objects, fixtures, the API helpers and the CI workflow. That was mine end to end.
>
> **Contributed to the existing Selenium framework:** I added the Apache POI data provider utility so tests read from Excel instead of hardcoded values, wrote the screenshot-on-failure ITestListener, and implemented the retry analyser for our flaky third-party-dependent tests.
>
> **Worked within, didn't design:** the original Selenium framework's core structure — the DriverFactory and base classes — was set up by our QA lead before I joined. I understand it fully and I extend it, but I want to be accurate that I didn't design that skeleton."

**Why the third point wins you the round.** Volunteering the boundary of your contribution is a strong credibility signal — and it almost always stops the interrogation, because you've shown you won't overclaim. Panels relax when a candidate does this.

---

# Part 2 — Framework Architecture & Design

> **This is the most-asked question in your entire list — it appeared 4 separate times across independent sources.** Rehearse Q6 out loud until you can deliver it without thinking. If you nail one answer in this file, make it this one.

## Q6. Explain your automation framework architecture. 🔴 **P0** `[L1] [L2]` ⏱ **2–2.5 min**

**Why they ask.** It's the single most efficient question in QA interviewing. In two minutes they learn your design sense, your vocabulary, your actual involvement, and whether you understand *flow* or just memorised folder names.

### The delivery strategy — layers, then flow

Most candidates list folders and stop. **Listing folders scores 5/10. Explaining the flow scores 9/10.** Do both, in that order, and end with the flow.

### Say this — Part A: the layer walkthrough

> "It's a **hybrid, layered, Maven-based framework** — hybrid meaning it combines data-driven and keyword-light approaches on a Page Object Model foundation. Seven layers:
>
> **1. Test Layer** — the actual TestNG test classes. These contain only business steps and assertions. No locators, no `driver` calls, no waits. If someone reads `ConfiguratorTest.java`, it should read like a test case document.
>
> **2. Page Layer** — one class per page or major component, following Page Object Model. Each holds that page's locators as private fields and exposes public business methods like `selectVariant()` or `getOnRoadPrice()`.
>
> **3. Base Layer** — `BaseTest` handles setup and teardown via TestNG annotations; `BasePage` holds reusable wrapped interactions like `click()`, `type()` and `getText()`, all with built-in explicit waits. Every page class extends `BasePage`, every test class extends `BaseTest`.
>
> **4. Driver Layer** — `DriverFactory` creates the WebDriver based on a runtime parameter, and stores it in a `ThreadLocal` so parallel execution never has two threads sharing a browser.
>
> **5. Utilities Layer** — `ExcelUtil` using Apache POI, `ConfigReader` as a Singleton for properties, `JsonUtil` for API payloads, `DateUtil` for service-appointment dates, and `ScreenshotUtil`.
>
> **6. Reporting & Listeners Layer** — Extent Reports for the HTML report, plus a TestNG `ITestListener` that captures a screenshot on failure and attaches it, and an `IRetryAnalyzer` for genuinely flaky third-party-dependent tests.
>
> **7. Config & CI Layer** — environment `.properties` files, `testng.xml` suite files grouped as smoke / sanity / regression, `pom.xml` with the Surefire plugin, and a Jenkins job that runs nightly and on every merge to develop."

### Say this — Part B: the flow (**this is the part that wins**)

> "And the flow, end to end:
>
> Jenkins triggers `mvn clean test -Dsuite=regression`. Maven's **Surefire** plugin picks up the `testng.xml` I pass in. TestNG reads that suite file and, before any test runs, `BaseTest`'s `@BeforeMethod` fires — it asks `ConfigReader` for the browser and base URL, calls `DriverFactory` to create the driver into `ThreadLocal`, and navigates to the application.
>
> The test method then instantiates the page object it needs, passing the driver from `ThreadLocal`. If it's data-driven, TestNG's `@DataProvider` calls `ExcelUtil` first and feeds each row in as a separate execution.
>
> The test calls business methods on the page object. Those methods live in the Page layer and internally call the wrapped, wait-backed helpers in `BasePage` — so the waiting is centralised and no test ever calls `Thread.sleep()`.
>
> Assertions happen in the test layer. If one fails, TestNG marks it failed and my `ITestListener`'s `onTestFailure` fires — it grabs a screenshot via `ScreenshotUtil` and attaches it to the Extent report. `@AfterMethod` then quits the driver and calls `ThreadLocal.remove()`.
>
> When the suite finishes, Extent writes the HTML report, Jenkins archives it and emails the team the summary."

### Folder structure — draw this if there's a whiteboard

```
autoconnect-automation/
├── pom.xml                                  # dependencies + Surefire plugin + Java version
├── testng.xml                               # default suite entry point
│
├── src/main/java/com/autoconnect/
│   ├── base/
│   │   ├── BaseTest.java                    # @BeforeMethod / @AfterMethod lifecycle
│   │   └── BasePage.java                    # wrapped click/type/getText with explicit waits
│   ├── driver/
│   │   └── DriverFactory.java               # browser creation + ThreadLocal storage
│   ├── pages/
│   │   ├── LoginPage.java
│   │   ├── ModelSelectionPage.java
│   │   ├── ConfiguratorPage.java            # variant, colour, accessory selection
│   │   ├── PriceBreakupPage.java            # on-road price assertions
│   │   ├── TestDriveBookingPage.java
│   │   └── dealer/InventoryPage.java
│   ├── api/
│   │   ├── PricingApiClient.java            # REST Assured request specs
│   │   └── payload/BookingPayload.java      # POJOs for serialisation
│   ├── utils/
│   │   ├── ConfigReader.java                # Singleton properties reader
│   │   ├── ExcelUtil.java                   # Apache POI read/write
│   │   ├── ScreenshotUtil.java
│   │   └── DateUtil.java
│   ├── constants/
│   │   └── FrameworkConstants.java          # paths, timeouts — no magic numbers in code
│   └── listeners/
│       ├── TestListener.java                # ITestListener → screenshot + Extent logging
│       └── RetryAnalyzer.java               # IRetryAnalyzer → re-run flaky tests once
│
├── src/test/java/com/autoconnect/tests/
│   ├── ui/ConfiguratorTest.java
│   ├── ui/BookingTest.java
│   └── api/PricingApiTest.java
│
├── src/test/resources/
│   ├── config/qa.properties, uat.properties  # per-environment config
│   ├── testdata/pricing_combinations.xlsx
│   └── suites/smoke.xml, sanity.xml, regression.xml
│
├── reports/                                  # Extent HTML output (gitignored)
└── Jenkinsfile
```

**Follow-up traps for Q6**

| They'll ask | Answer |
|---|---|
| *"Why `ThreadLocal`?"* | "Parallel execution. A static WebDriver would be shared across threads, so thread B could act on thread A's browser. `ThreadLocal` gives each thread its own copy. And I always call `remove()` in teardown — without it you leak drivers in a reused thread pool." |
| *"Why is `pages` under `main` and tests under `test`?"* | "Pages, utils and base are reusable production-style code; tests are the consumers. It also means the page layer could be packaged as a JAR and shared across projects." |
| *"Where does your test data live?"* | "Three tiers: environment config in `.properties`, bulk combinational data in Excel via POI, and API payloads as JSON or POJOs. Nothing hardcoded in test methods." |
| *"How long does the full suite take?"* | Give a real number and the parallel config: "~2.5 hrs on 4 threads; ~7 hrs serial." |

---

## Q7. What type of framework are you using? 🔴 **P0** `[L1]` ⏱ **45 sec**

**Why they ask.** Vocabulary check. Many candidates say "POM framework" — which is a category error worth correcting, and correcting it scores points.

**Say this**

> "It's a **hybrid framework**. I want to be precise about one thing though — Page Object Model is a *design pattern*, not a framework type. It's the structural foundation, but it isn't the answer to 'what type.'
>
> The framework types are:
> - **Data-driven** — same script, many datasets. Ours does this via TestNG `@DataProvider` reading Excel through Apache POI.
> - **Keyword-driven** — actions defined as keywords in an external sheet, mapped to methods. We use a light version for a few repetitive dealer-portal flows, not fully.
> - **Modular** — application broken into independent reusable modules.
> - **BDD** — Gherkin feature files with Cucumber, business-readable.
> - **Hybrid** — combination of the above.
>
> Ours is hybrid: POM as the structure, data-driven for the pricing combinations, modular utilities, with TestNG as the runner. We deliberately didn't use Cucumber, because our BAs write acceptance criteria directly in Jira and weren't going to read feature files — so Gherkin would have added a maintenance layer with no reader."

**Why the last line matters.** Explaining *why you didn't* use a popular tool demonstrates independent judgement rather than resume-driven development. Panels remember this answer.

---

## Q8. Are you designing the framework from scratch? Explain the folder structure. 🔴 **P0** `[L2]` ⏱ **90 sec**

**Why they ask.** Direct credibility probe — and this exact question is on your Infosys L1 list, so expect it verbatim.

**Say this** *(use the honest-but-strong formula from Q5)*

> "Partly, and I'll be specific about which parts.
>
> The Selenium framework for the dealer portal existed when I joined — the base classes and DriverFactory were designed by our QA lead. I've extended it substantially: I added the Excel data-driven layer, the screenshot listener and the retry analyser, and I own the page objects for my modules.
>
> The **Playwright framework for the configurator I did build from scratch** — I chose the structure, wrote the config, the fixtures, the page objects and the GitHub Actions workflow. So I've done both: worked inside someone else's design, and made the design decisions myself. Let me walk you through the folder structure of each."

Then deliver the tree from **Q6**, followed by the Playwright tree from **Q13**.

**Then explain the *reasoning* behind the structure**, because that's the real question hiding underneath:

- **Separation of concerns** — a locator change touches exactly one file in `pages/`, never a test
- **`main` vs `test`** — reusable library code vs the tests that consume it
- **No magic values** — timeouts and paths live in `FrameworkConstants`, so a change is one line
- **Environment-switchable** — `-Denv=uat` swaps the properties file; no code change to move environments
- **Suites as separate XMLs** — smoke runs in 10 min on every commit, full regression nightly

---

## Q9. What design patterns have you used in your framework? 🟠 **P1** `[L2]` ⏱ **90 sec**

**Why they ask.** Separates people who copied a framework from people who understand *why* it's shaped that way. At 2 years, answering this well is a genuine differentiator — most candidates name only POM.

**Say this — name five, with where each lives**

**1. Page Object Model** — the structural pattern. One class per page; locators encapsulated as private fields, behaviour exposed as public methods.

**2. Singleton** — `ConfigReader`. The properties file should be read from disk once and shared, not re-read on every call.

```java
public final class ConfigReader {                       // final: nobody can subclass and bypass the pattern
    private static Properties properties;               // static: one shared instance for the whole JVM
    private ConfigReader() { }                          // private constructor blocks 'new ConfigReader()'

    public static synchronized Properties get() {       // synchronized: two parallel threads can't both init
        if (properties == null) {                       // lazy init: only load on first actual use
            properties = new Properties();
            String env = System.getProperty("env", "qa");           // read -Denv from CLI, default to qa
            String path = "src/test/resources/config/" + env + ".properties";
            try (FileInputStream fis = new FileInputStream(path)) { // try-with-resources auto-closes the stream
                properties.load(fis);                               // parse key=value pairs into the object
            } catch (IOException e) {
                throw new RuntimeException("Config not found: " + path, e);  // fail fast at startup, not mid-test
            }
        }
        return properties;
    }
}
```

**3. Factory** — `DriverFactory`. The test asks for "chrome" and gets a driver; it never calls `new ChromeDriver()` itself. Adding Edge support means changing one file.

```java
public class DriverFactory {
    // ThreadLocal = one independent WebDriver per thread, essential for parallel runs
    private static final ThreadLocal<WebDriver> tlDriver = new ThreadLocal<>();

    public static WebDriver initDriver(String browser) {
        switch (browser.toLowerCase()) {                     // decide the browser at runtime, not compile time
            case "chrome":
                ChromeOptions co = new ChromeOptions();
                if (Boolean.parseBoolean(ConfigReader.get().getProperty("headless"))) {
                    co.addArguments("--headless=new");        // headless in CI, headed locally for debugging
                }
                tlDriver.set(new ChromeDriver(co));           // Selenium Manager auto-resolves the driver binary
                break;
            case "firefox":
                tlDriver.set(new FirefoxDriver());
                break;
            default:
                throw new IllegalArgumentException("Unsupported browser: " + browser);  // fail loudly, don't NPE later
        }
        getDriver().manage().window().maximize();
        return getDriver();
    }

    public static WebDriver getDriver() {                    // single access point used by every page object
        return tlDriver.get();
    }

    public static void quitDriver() {
        if (tlDriver.get() != null) {                         // guard: teardown may run even if setup failed
            tlDriver.get().quit();                            // close browser and end the driver session
            tlDriver.remove();                                // CRITICAL: clears the thread's slot, prevents leaks
        }
    }
}
```

**4. Fluent Interface / Method Chaining** — page methods return `this` (or the next page object), so a test reads like a sentence:

```java
configuratorPage.selectVariant("VX")                 // returns 'this' → chain continues on the same page
                .selectColour("Pearl White")
                .addAccessory("Roof Rails")
                .proceedToPriceBreakup();            // returns PriceBreakupPage → navigation is type-safe
```

**5. Strategy** — our on-road price validation. Different states use different tax rules, so we have a `TaxCalculator` interface with per-state implementations, selected at runtime. The test asks for the expected price without knowing which rule applied.

**Closing line:** *"There's also a light **Builder** in the API layer for constructing booking payloads with optional fields, so we don't end up with five overloaded constructors."*

**Follow-up trap:** *"What's the difference between Factory and Abstract Factory?"*
> "Factory produces one family of objects — my DriverFactory returns WebDriver instances. Abstract Factory is a factory of factories: it returns a factory, used when you have multiple related product families. For driver creation, plain Factory is sufficient; Abstract Factory would be over-engineering."

---

## Q10. What is the Page Object Model? Advantages and limitations. 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Why they ask.** The most universal automation-design question there is. **Note the second half — "limitations."** Most candidates only prepared the advantages, so the limitations answer is where you separate yourself.

**Say this — definition**

> "POM is a design pattern where every page or major UI component of the application gets its own class. That class holds the page's locators as private fields and exposes public methods representing the business actions available on that page. Tests then talk to those methods and never see a locator or a `driver` call.
>
> The core principle is a **single source of truth for each element**. If the configurator's variant dropdown ID changes, I edit one line in `ConfiguratorPage` and every test that touches it is fixed."

**Code — the page object**

```java
public class ConfiguratorPage extends BasePage {          // inherits driver, wait, and wrapped actions

    // --- Locators: private, so no test can reach in and use them directly ---
    private final By variantDropdown  = By.id("variant-select");
    private final By onRoadPriceLabel = By.cssSelector("[data-test='on-road-price']");
    private final By proceedButton    = By.xpath("//button[normalize-space()='Proceed']");

    public ConfiguratorPage(WebDriver driver) {
        super(driver);                                    // BasePage sets up driver + WebDriverWait
    }

    // Dynamic locator built at runtime — colour swatches have no static IDs
    private By colourSwatch(String colour) {
        return By.cssSelector("div.swatch[data-colour='" + colour + "']");
    }

    // --- Business methods: named after what a USER does, not what Selenium does ---
    public ConfiguratorPage selectVariant(String variant) {
        selectByVisibleText(variantDropdown, variant);    // helper in BasePage wraps Select + wait
        return this;                                      // return 'this' to enable method chaining
    }

    public ConfiguratorPage selectColour(String colour) {
        click(colourSwatch(colour));                      // BasePage.click() waits for clickability first
        return this;
    }

    public double getOnRoadPrice() {
        String raw = getText(onRoadPriceLabel);            // e.g. "₹ 12,45,000"
        return Double.parseDouble(raw.replaceAll("[^0-9.]", ""));  // strip currency symbol and commas
    }

    public PriceBreakupPage proceedToPriceBreakup() {
        click(proceedButton);
        return new PriceBreakupPage(driver);               // return the NEXT page — models real navigation
    }
}
```

**Code — the test that consumes it**

```java
public class ConfiguratorTest extends BaseTest {

    @Test(groups = {"smoke", "regression"})
    public void verifyAccessoryIncreasesOnRoadPrice() {
        ConfiguratorPage config = new ConfiguratorPage(DriverFactory.getDriver());

        double basePrice = config.selectVariant("VX")     // reads like a test case document —
                                 .selectColour("Pearl White")   // no locators, no waits, no driver calls
                                 .getOnRoadPrice();

        double withAccessory = config.addAccessory("Roof Rails")
                                     .getOnRoadPrice();

        Assert.assertTrue(withAccessory > basePrice,      // assertions belong in the TEST layer only
                "On-road price should increase after adding an accessory");
    }
}
```

### Advantages — five

| Advantage | Concrete effect |
|---|---|
| **Maintainability** | Locator changes hit one file. Our configurator UI was redesigned last quarter — I updated 3 page classes, zero test classes. |
| **Reusability** | `LoginPage.login()` is called by ~40 tests. Written once. |
| **Readability** | Tests read as business flows; the manual tester on my team can review them without knowing Selenium. |
| **Reduced duplication** | No copy-pasted XPaths scattered across the suite. |
| **Clean separation** | Test = *what* to verify; Page = *how* to interact. Different people can own each layer. |

### Limitations — five *(this is the differentiating half)*

| Limitation | Honest framing |
|---|---|
| **High upfront cost** | For a small suite or a short-lived project, POM's setup effort can exceed the payoff. |
| **Class explosion** | Large apps end up with a very large number of page classes. Ours has 30+; navigating it needs discipline and good package structure. |
| **Fragile for highly dynamic UIs** | If a component's structure changes with data — like our accessory grid — locators still need rework. POM localises the pain; it doesn't remove it. |
| **God-class risk** | Long pages tempt you into 40-method classes. We split by *component* rather than by *page* — `PriceBreakupComponent` separate from the page — to counter this. |
| **Doesn't solve waiting or data** | POM is purely a structural pattern. Synchronisation, test data and reporting are separate problems requiring separate solutions. |

**Follow-up trap:** *"What's the difference between POM and PageFactory?"*
> "POM is the pattern. PageFactory is Selenium's built-in helper for implementing it — you annotate fields with `@FindBy` and call `PageFactory.initElements(driver, this)` in the constructor, which lazily initialises them. I actually prefer plain `By` locators over PageFactory, because `@FindBy` fields are resolved lazily and can throw `StaleElementReferenceException` on SPAs where the DOM re-renders. With `By`, the element is located fresh at the moment of use."

That last point is a genuinely senior-sounding answer. Learn it.

---

## Q11. What is inheritance, and where do you apply it in your framework? 🔴 **P0** `[L1] [L2]` ⏱ **75 sec**

**Why they ask.** It's on your Infosys L1 list verbatim, and it's the classic **"theory + prove it in your project"** combo. Answering only the theory half scores 50%.

**Say this — theory first, briefly**

> "Inheritance lets one class acquire the fields and methods of another using `extends`, creating an *is-a* relationship. It gives you code reuse and enables runtime polymorphism."

**Then — the four places it lives in my framework** *(this is the real answer)*

**1. `BasePage` → every page class.** Common wrapped interactions live once.

```java
public class BasePage {
    protected WebDriver driver;                   // protected: visible to subclasses, hidden from tests
    protected WebDriverWait wait;

    public BasePage(WebDriver driver) {
        this.driver = driver;
        int timeout = FrameworkConstants.EXPLICIT_WAIT;             // no magic numbers
        this.wait = new WebDriverWait(driver, Duration.ofSeconds(timeout));  // one wait object reused by all pages
    }

    protected void click(By locator) {
        wait.until(ExpectedConditions.elementToBeClickable(locator)).click();  // wait-then-act kills flakiness
    }

    protected void type(By locator, String text) {
        WebElement el = wait.until(ExpectedConditions.visibilityOfElementLocated(locator));
        el.clear();                                // clear stale value first, otherwise text appends
        el.sendKeys(text);
    }

    protected String getText(By locator) {
        return wait.until(ExpectedConditions.visibilityOfElementLocated(locator)).getText();
    }

    protected void selectByVisibleText(By locator, String text) {
        WebElement dd = wait.until(ExpectedConditions.visibilityOfElementLocated(locator));
        new Select(dd).selectByVisibleText(text);  // Select only works on real <select> tags
    }
}
```

> "So `ConfiguratorPage extends BasePage` and immediately has wait-backed `click()` and `type()`. Without this, every page class would rewrite its own waits — and that's exactly how inconsistent, flaky suites happen."

**2. `BaseTest` → every test class.** Setup and teardown written once.

```java
public class BaseTest {

    @BeforeMethod(alwaysRun = true)               // alwaysRun: executes even when a group filter is applied
    @Parameters("browser")                        // value supplied from testng.xml
    public void setUp(@Optional("chrome") String browser) {   // @Optional = fallback when run outside testng.xml
        DriverFactory.initDriver(browser);
        DriverFactory.getDriver().get(ConfigReader.get().getProperty("baseUrl"));
    }

    @AfterMethod(alwaysRun = true)
    public void tearDown() {
        DriverFactory.quitDriver();               // quit + ThreadLocal.remove() — no leaked browsers
    }
}
```

**3. Custom exceptions.** `FrameworkException extends RuntimeException`, so a config failure surfaces as a clear framework error rather than a bare `NullPointerException`.

**4. Interface implementation.** `TestListener implements ITestListener` and `RetryAnalyzer implements IRetryAnalyzer` — inheriting a contract from TestNG rather than concrete code.

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"Why not put everything in one giant BasePage?"* | "It would violate single-responsibility and become a god class. Interaction helpers belong in `BasePage`; driver lifecycle in `DriverFactory`; data reading in `ExcelUtil`. Each has one reason to change." |
| *"Java doesn't support multiple inheritance — how do you get around it?"* | "Through interfaces. A class extends one parent but implements many interfaces. Since Java 8, `default` methods in interfaces even allow inherited behaviour — which is how Java gives you multiple inheritance of *type* without the diamond problem of multiple inheritance of *state*." |
| *"Show me polymorphism in your framework."* | "`WebDriver driver = new ChromeDriver()` — parent-type reference, child object, method calls resolved at runtime. That's exactly why `DriverFactory` can return `WebDriver` and every page object works unchanged regardless of browser." |

---

## Q12. Why do you use two frameworks — Selenium and Playwright? 🟠 **P1** `[L2]` ⏱ **60 sec**

**Why they ask.** Because your resume lists both, the panel will suspect resume padding. **This question is a trap only if you're unprepared — and a gift if you are.** Answered well, it demonstrates tool-selection judgement, which is a lead-level trait.

**Say this**

> "It was a per-application decision rather than a migration.
>
> The **dealer portal** is an older server-rendered JSP application with a mature Selenium suite of around 300 cases. It's stable, it works, and rewriting 300 passing tests would have had no business case.
>
> The **customer-facing configurator** is a newer React SPA, and we hit real problems automating it with Selenium — the pricing recalculates asynchronously on every selection, so we were fighting `StaleElementReferenceException` and adding explicit waits everywhere. We piloted Playwright and it addressed that directly: auto-waiting is built into every action, so the flakiness largely disappeared. Trace Viewer also cut our failure-triage time significantly, because you get a DOM snapshot at each step instead of a single screenshot.
>
> So: Selenium where it's already working and the app is stable, Playwright where the app is modern and heavily async. If we were greenfield today, I'd start with Playwright."

**Follow-up trap:** *"Isn't maintaining two frameworks expensive?"*
> "It is a real cost, and we manage it deliberately — clear ownership boundaries, and we keep the *conventions* aligned even though the languages differ. Both use page objects, both read config from environment files, both report into the same Jenkins dashboard. So a person moving between them recognises the structure even if the syntax changes."

---

## Q13. How is your Playwright project structured? 🟠 **P1** `[L2]` ⏱ **90 sec**

**Why they ask.** You claimed you built it from scratch in Q5 and Q8. This is the verification.

**Folder structure**

```
autoconnect-pw/
├── package.json
├── playwright.config.ts                 # projects, retries, reporters, baseURL, trace settings
├── tsconfig.json
│
├── src/
│   ├── pages/
│   │   ├── base.page.ts                 # shared helpers (analogous to BasePage)
│   │   ├── configurator.page.ts
│   │   └── price-breakup.page.ts
│   ├── fixtures/
│   │   └── pages.fixture.ts             # custom fixtures — DI for page objects
│   ├── api/
│   │   └── pricing.api.ts               # request-context based API helpers
│   └── utils/
│       ├── env.ts                       # typed environment config
│       └── price.helper.ts
│
├── tests/
│   ├── ui/configurator.spec.ts
│   └── api/pricing.spec.ts
│
├── test-data/pricing.json
├── auth/storageState.json               # saved login session (gitignored)
└── playwright-report/
```

**Code — `playwright.config.ts`, the file they'll ask about**

```ts
import { defineConfig, devices } from '@playwright/test';

export default defineConfig({
  testDir: './tests',
  fullyParallel: true,                    // run test FILES in parallel across workers
  workers: process.env.CI ? 4 : 2,        // fewer workers locally so the machine stays usable
  retries: process.env.CI ? 1 : 0,        // retry once in CI to absorb infra blips, never locally
  forbidOnly: !!process.env.CI,           // fail the build if someone commits a test.only
  timeout: 45_000,                        // per-test cap
  expect: { timeout: 10_000 },            // per-assertion auto-retry window

  reporter: [
    ['html', { open: 'never' }],          // rich local report
    ['junit', { outputFile: 'results.xml' }],  // machine-readable for the CI dashboard
  ],

  use: {
    baseURL: process.env.BASE_URL,        // relative goto('/configurator') everywhere
    trace: 'on-first-retry',              // full trace only when needed — cheap but diagnostic
    screenshot: 'only-on-failure',
    video: 'retain-on-failure',
  },

  projects: [
    { name: 'setup', testMatch: /auth\.setup\.ts/ },              // logs in once, saves storageState
    {
      name: 'chromium',
      use: { ...devices['Desktop Chrome'], storageState: 'auth/storageState.json' },
      dependencies: ['setup'],            // guarantees setup runs before this project
    },
    { name: 'webkit', use: { ...devices['Desktop Safari'] }, dependencies: ['setup'] },
  ],
});
```

**Code — custom fixture (the pattern that impresses)**

```ts
import { test as base } from '@playwright/test';
import { ConfiguratorPage } from '../pages/configurator.page';

type MyFixtures = { configurator: ConfiguratorPage };

export const test = base.extend<MyFixtures>({
  configurator: async ({ page }, use) => {      // 'page' is Playwright's built-in per-test fixture
    const configurator = new ConfiguratorPage(page);
    await configurator.goto();                   // arrange: land on the page before the test body
    await use(configurator);                     // hand the ready object to the test
    // anything written after use() runs as teardown for this fixture
  },
});

export { expect } from '@playwright/test';
```

```ts
// The test then declares what it needs and receives it — no manual instantiation
test('adding an accessory increases the on-road price', async ({ configurator }) => {
  const base = await configurator.selectVariant('VX').then(p => p.getOnRoadPrice());
  const withRails = await configurator.addAccessory('Roof Rails').then(p => p.getOnRoadPrice());
  expect(withRails).toBeGreaterThan(base);
});
```

**Say this about the design choices** *(this is what they're actually grading)*

> "Three decisions I'd call out. First, **fixtures instead of `beforeEach`** — the test declares what it needs and Playwright injects it, so there's no shared mutable state between tests and no manual instantiation. Second, **`storageState` with a setup project** — we log in once, save the session, and reuse it, which removed a 4-second login from every single test. Third, **`trace: 'on-first-retry'`** — full traces on every test would be slow and huge, but on retry you get a complete DOM timeline exactly when you need it for debugging."

---

## Q14. What are the key differences between Selenium and Playwright? 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Why they ask.** With both on your resume, this is the natural comparison question — and it's on your source list explicitly.

**Say this — lead with the architectural difference, because it explains everything else**

> "The fundamental difference is architecture. Selenium is a **W3C WebDriver** implementation — it talks to a separate browser-driver process over HTTP, and each command is a round trip. Playwright talks to the browser directly over the **DevTools/CDP-style protocol on a persistent WebSocket connection**. Almost every practical difference follows from that."

| Dimension | Selenium 4 | Playwright |
|---|---|---|
| **Architecture** | W3C WebDriver, HTTP per command, separate driver binary | Direct protocol over one persistent WebSocket |
| **Waiting** | Manual — implicit, explicit or fluent waits | **Auto-waiting** built into every action (checks visible, stable, enabled, receives events) |
| **Languages** | Java, Python, C#, JS, Ruby, Kotlin | JS/TS, Python, Java, C# (JS/TS is first-class) |
| **Browsers** | Chrome, Firefox, Edge, Safari + real device farms | Bundled Chromium, Firefox, WebKit |
| **Test runner** | None — needs TestNG / JUnit / pytest | Built-in runner with parallelism and retries |
| **Isolation** | Manual — new driver per test | **BrowserContext** — near-instant isolated sessions in one browser process |
| **Iframes** | Explicit `switchTo().frame()` | `frameLocator()`, no context switching |
| **New tabs / windows** | `getWindowHandles()` and switch | `context.waitForEvent('page')` |
| **Network mocking** | Not native (needs CDP or a proxy) | First-class `page.route()` |
| **Debugging** | Screenshots, logs | **Trace Viewer** — DOM snapshots per step, Codegen, UI mode |
| **Speed** | Slower — HTTP round trips + browser restarts | Faster — persistent connection + context reuse |
| **Ecosystem maturity** | Very large, 15+ years, huge community | Newer, growing fast, smaller Q&A corpus |
| **Grid / cloud** | Selenium Grid, mature vendor support | Sharding built in; cloud support improving |
| **Mobile** | Appium shares the WebDriver protocol | Device *emulation* only — no native app testing |

**Then land the honest trade-off** — this is what separates you from a candidate reciting a table:

> "In our project the two decisive advantages of Playwright were auto-waiting, which removed most of our flaky-test debt on the SPA, and Trace Viewer, which turned a 'why did this fail overnight' investigation from twenty minutes into two.
>
> But Selenium still wins on three things: language ecosystem — our team is a Java team, and Playwright's Java binding is less idiomatic than its TypeScript one; real device and browser-farm coverage through Grid and vendor clouds; and native mobile app testing, where Appium shares Selenium's protocol and Playwright simply doesn't compete. So it isn't 'Playwright replaced Selenium' — Selenium is the safer choice for a Java-heavy team with broad device requirements."

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"Does Selenium 4 not have auto-waiting?"* | "No — that's a common misconception. Selenium 4 added relative locators and native CDP access, but there's still no automatic wait before an action. You get an implicit wait for *element location*, not for it being stable or clickable. Playwright's waiting covers visibility, stability, enabled-state and event receptiveness." |
| *"Why is BrowserContext faster than a new driver?"* | "A new WebDriver session launches a whole browser process — seconds. A BrowserContext is a fresh isolated profile inside an already-running browser — cookies, storage and cache are separate, but there's no process launch. Milliseconds instead of seconds." |
| *"Which would you pick for a new project?"* | Commit to an answer, don't hedge: "Playwright for a modern web app, unless the team is Java-only or needs native mobile — then Selenium plus Appium." |

---

# ✅ Rehearsal checklist for File 1

Say each of these **out loud, timed**. Reading them silently does not build recall under pressure.

| # | Question | Target | Done |
|---|---|---|---|
| 1 | Tell me about yourself | 90 s | ☐ |
| 2 | Describe your project and role | 90 s | ☐ |
| 3 | Roles and responsibilities | 60 s | ☐ |
| 6 | **Framework architecture — layers *then* flow** | 2.5 min | ☐ |
| 7 | What type of framework | 45 s | ☐ |
| 9 | Design patterns used | 90 s | ☐ |
| 10 | POM + advantages **+ limitations** | 90 s | ☐ |
| 11 | Inheritance in your framework | 75 s | ☐ |
| 12 | Why two frameworks | 60 s | ☐ |
| 14 | Selenium vs Playwright | 90 s | ☐ |

**The three highest-value things in this file:** the **flow** half of Q6, the **limitations** half of Q10, and the **why-two-frameworks** answer in Q12. Those are where most candidates are thin.


---
---

# Part 3 — Core Java — Theory

> **Infosys weights Java heavily even for QA roles.** The pattern is always the same: a definition question, then *"where did you use this in your framework?"* Every answer below carries that project anchor. Learn the anchors, not just the theory.

---

## Q15. String vs StringBuilder vs StringBuffer 🔴 **P0** `[L1]` ⏱ **60 sec**

**Why they ask.** Tests whether you understand **immutability** — one of the most fundamental Java concepts, and the reason `String` behaves surprisingly in loops.

| | String | StringBuilder | StringBuffer |
|---|---|---|---|
| **Mutable?** | ❌ Immutable | ✅ Mutable | ✅ Mutable |
| **Thread-safe?** | ✅ (because immutable) | ❌ No | ✅ Yes (`synchronized` methods) |
| **Speed** | Slow for repeated modification | **Fastest** | Slower than StringBuilder (locking overhead) |
| **Since** | Java 1.0 | Java 1.5 | Java 1.0 |
| **Storage** | String Pool (if literal) | Heap | Heap |
| **Use when** | Fixed text, keys, config values | Single-threaded string building — the default choice | Multi-threaded string building (rare) |

**Say this**

> "`String` is immutable — once created, it cannot be changed. Any operation that looks like modification actually creates a brand-new object. So this loop creates 1,000 discarded objects:
>
> ```java
> String s = "";
> for (int i = 0; i < 1000; i++) { s += i; }   // 1000 new String objects — O(n²) work
> ```
>
> `StringBuilder` mutates an internal char array in place, so the same loop creates one object. `StringBuffer` is the older thread-safe version — its methods are `synchronized`, which costs performance you almost never need, since string building is usually local to one method and therefore already thread-confined."

**The project anchor**

> "In my framework I use `StringBuilder` in `ExcelUtil` when building a concatenated key from a spreadsheet row — variant plus colour plus state — and when assembling a dynamic XPath from multiple parts. And I rely on `String` immutability for the config values from `ConfigReader`: because they're immutable, I can hand the same reference to parallel test threads with no risk of one thread mutating another's base URL."

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"Why is String immutable?"* | "Three reasons: **security** — a String passed to a file or DB call can't be changed after a permission check; **String Pool** — literals are shared, so mutation would corrupt other references; **hashcode caching** — String caches its hash, which is what makes it a safe and fast `HashMap` key." |
| *"`==` vs `.equals()` for Strings?"* | "`==` compares references; `.equals()` compares character content. `"a" == "a"` is true because both literals point to the same pooled object, but `new String("a") == new String("a")` is false. **For String comparison always use `.equals()`** — this is the classic interview trap." |
| *"What's `intern()`?"* | "It forces a String onto the pool and returns the pooled reference, so a heap String can be made reference-comparable to a literal." |

---

## Q16. HashMap vs HashTable vs ConcurrentHashMap 🔴 **P0** `[L1]` ⏱ **60 sec**

**Why they ask.** Standard collections screening question, and a direct route into thread-safety.

| | HashMap | HashTable | ConcurrentHashMap |
|---|---|---|---|
| **Thread-safe** | ❌ No | ✅ Yes — whole map locked | ✅ Yes — segment/bucket-level locking |
| **null key/values** | 1 null key, many null values | ❌ None allowed | ❌ None allowed |
| **Performance** | Fastest (no locking) | Slowest (locks everything) | Fast under concurrency |
| **Ordering** | None guaranteed | None | None |
| **Since / status** | 1.2 | 1.0 — **legacy, don't use** | 1.5 |
| **Iterator** | Fail-fast | Enumerator (not fail-fast) | Fail-safe (weakly consistent) |

**Say this**

> "The practical difference is thread-safety and how it's achieved. `HashTable` synchronises every method, so only one thread touches the map at a time — correct but a bottleneck. `ConcurrentHashMap` locks only the relevant bucket, so multiple threads can write to different buckets simultaneously. `HashMap` does no locking at all and is the fastest for single-threaded use.
>
> `HashTable` is effectively deprecated in practice — if you need thread safety today you use `ConcurrentHashMap`, so `HashTable` is now really a history question."

**The project anchor**

> "I use a plain `HashMap<String, String>` to hold one row of Excel test data — column name to cell value. But in a utility that caches on-road prices across parallel test threads, I switched to `ConcurrentHashMap`, because with 4 TestNG threads writing to a shared `HashMap` we saw intermittent lost entries. That's a concrete case where the distinction mattered rather than being trivia."

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"How does HashMap work internally?"* | "It's an array of buckets. `put()` calls `hashCode()` on the key, derives a bucket index, then uses `equals()` to check for an existing entry. Collisions form a linked list in that bucket — and **since Java 8, once a bucket exceeds 8 entries it converts to a balanced tree**, improving worst-case lookup from O(n) to O(log n)." |
| *"Why override both hashCode() and equals()?"* | "`hashCode()` finds the bucket, `equals()` finds the entry within it. Override only `equals()` and equal objects land in different buckets, so lookups fail. Override only `hashCode()` and they collide but are never recognised as equal. **The contract: equal objects must have equal hash codes.**" |
| *"HashMap vs LinkedHashMap vs TreeMap?"* | "HashMap — no order. LinkedHashMap — insertion order preserved. TreeMap — sorted by key, O(log n) instead of O(1). I use LinkedHashMap when reporting needs to show test data in the original spreadsheet order." |

---

## Q17. Explain the four OOP concepts with real examples from your framework 🔴 **P0** `[L1] [L2]` ⏱ **2 min**

**Why they ask.** Guaranteed at Infosys. The differentiator is entirely in the **framework examples** — textbook `Animal`/`Dog` examples score poorly for someone with two years of experience.

### 1. Encapsulation — *bind data with behaviour, hide the internals*

> "This is literally what Page Object Model is. My `ConfiguratorPage` keeps locators as `private` fields and exposes `public` business methods. A test can call `selectVariant("VX")` but cannot reach the variant dropdown's XPath. So when the locator changes, tests are untouched — the class controls its own internals."

```java
public class ConfiguratorPage extends BasePage {
    private final By variantDropdown = By.id("variant-select");   // private = hidden from every test class

    public ConfiguratorPage selectVariant(String v) {             // public = the only permitted way in
        selectByVisibleText(variantDropdown, v);
        return this;
    }
}
```

### 2. Inheritance — *reuse via an is-a relationship*

> "`ConfiguratorPage extends BasePage`, so it inherits the wait-backed `click()` and `type()` helpers. `ConfiguratorTest extends BaseTest`, so it inherits driver setup and teardown. Without this, every page would rewrite its own waits — which is how suites become inconsistent and flaky."

### 3. Polymorphism — *one interface, many forms*

> "Two kinds, and I use both.
>
> **Compile-time (overloading):** my `ExcelUtil` has `getData(String sheet)` and `getData(String sheet, int row)` — same name, different parameters, resolved by the compiler.
>
> **Runtime (overriding):** the cleanest example in all of Selenium is
> ```java
> WebDriver driver = new ChromeDriver();   // parent-type reference, child object
> driver.findElement(...);                 // ChromeDriver's implementation runs, decided at runtime
> ```
> That's exactly why my `DriverFactory` can declare a return type of `WebDriver` and every page object works unchanged whether it's Chrome, Firefox or Edge. **Polymorphism is what makes cross-browser testing possible.**"

### 4. Abstraction — *expose what, hide how*

> "`WebDriver` itself is an interface. I call `driver.findElement()` with no knowledge of the HTTP request to the driver binary underneath. In my own code, `BasePage.click()` abstracts away the explicit wait — the page classes calling it don't need to know a `WebDriverWait` is involved. I also have an abstract `BaseApiClient` that defines the request-spec template and leaves the endpoint to each subclass."

**Follow-up trap:** *"Abstraction vs Encapsulation — aren't they the same?"*
> "They're often confused. **Abstraction is design-level** — deciding *what* to expose, achieved with interfaces and abstract classes. **Encapsulation is implementation-level** — *how* you protect the internals, achieved with access modifiers and getters. Abstraction hides complexity; encapsulation hides data. `WebDriver` as an interface is abstraction; private locators in my page class is encapsulation."

---

## Q18. Method overloading vs method overriding 🔴 **P0** `[L1]` ⏱ **60 sec**

| | Overloading | Overriding |
|---|---|---|
| **Definition** | Same method name, **different parameter list**, same class | Subclass **redefines** a parent method with the identical signature |
| **Resolved** | Compile time (static binding) | Runtime (dynamic binding) |
| **Polymorphism type** | Compile-time | Runtime |
| **Parameters** | **Must** differ (type, count or order) | Must be **identical** |
| **Return type** | Can differ freely | Must be same or a covariant subtype |
| **Access modifier** | Any | Cannot be more restrictive than parent |
| **`static` methods** | Can be overloaded | **Cannot** be overridden — that's *hiding* (see Q27) |
| **`private`/`final`** | Can be overloaded | Cannot be overridden |
| **Exceptions** | Any | Cannot add new/broader **checked** exceptions |

**The trap they will spring**

> "Changing only the return type is **not** overloading — it's a compile error, because the compiler picks a method by its parameter list, not its return type."

```java
// ❌ Compile error — signatures are identical
int  getPrice(String variant) { ... }
double getPrice(String variant) { ... }

// ✅ Valid overloading — parameter lists differ
public String getData(String sheet)              { ... }   // whole sheet
public String getData(String sheet, int row)     { ... }   // one row
public String getData(String sheet, String col)  { ... }   // one column
```

**The project anchor**

> "Overloading: my `ExcelUtil.getData()` variants above, and `BasePage.click(By locator)` alongside `click(WebElement el)`.
>
> Overriding: my `TestListener` overrides `onTestFailure()` from TestNG's `ITestListener` — TestNG calls it at runtime and my screenshot logic executes instead of the default empty body. Also `toString()` overridden on my `BookingPayload` POJO so failures log readable request bodies."

---

## Q19. Abstract class vs Interface 🔴 **P0** `[L1] [L2]` ⏱ **75 sec**

| | Abstract class | Interface |
|---|---|---|
| **Methods** | Abstract **and** concrete | Abstract; plus `default` / `static` since Java 8, `private` since Java 9 |
| **Variables** | Any type, any modifier | Implicitly `public static final` — constants only |
| **Constructor** | ✅ Has one (called via `super()`) | ❌ None |
| **Multiple inheritance** | ❌ One parent only | ✅ Implement many |
| **Keyword** | `extends` | `implements` |
| **State** | ✅ Can hold instance state | ❌ No instance state |
| **Access modifiers** | Any | Methods implicitly `public` |
| **Relationship** | Strong "is-a", shared identity | Capability / contract — "can-do" |

**Say this — the decision rule**

> "The rule I apply: **use an abstract class when subclasses share code and identity; use an interface when unrelated classes share a capability.**
>
> Selenium demonstrates both perfectly. `WebDriver` is an **interface** — a pure contract, so `ChromeDriver` and `FirefoxDriver` can be entirely different implementations with no shared code obligation. `TakesScreenshot` is also an interface, because 'can be screenshotted' is a capability that cuts across unrelated types.
>
> In my own framework, `BasePage` is a **concrete parent class** with real shared code. My `BaseApiClient` is **abstract** — it holds the common `RequestSpecification` as state and defines the request template, but declares `abstract String endpoint()` so each subclass must supply its own path."

```java
public abstract class BaseApiClient {
    protected RequestSpecification spec;                   // shared STATE — impossible in an interface

    protected BaseApiClient() {                            // constructor — impossible in an interface
        spec = new RequestSpecBuilder()
                .setBaseUri(ConfigReader.get().getProperty("apiBaseUri"))
                .setContentType(ContentType.JSON)
                .build();
    }

    protected abstract String endpoint();                  // each subclass MUST define its own path

    public Response get(Map<String, ?> queryParams) {       // concrete reusable behaviour
        return RestAssured.given().spec(spec)
                 .queryParams(queryParams)
                 .when().get(endpoint());                   // calls the subclass's implementation
    }
}
```

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"Since Java 8 interfaces have default methods — is the abstract class obsolete?"* | "No. `default` methods give interfaces shared *behaviour*, but interfaces still cannot hold instance **state** or have a constructor. If your common code needs fields, you need an abstract class." |
| *"Can an abstract class have zero abstract methods?"* | "Yes. It just means it can't be instantiated directly — sometimes used purely to force subclassing." |
| *"What's the diamond problem?"* | "If a class inherited state from two parents defining the same field, which wins is ambiguous. Java avoids it by allowing only single class inheritance. With `default` methods a similar clash can occur, and Java requires you to resolve it explicitly via `Interface.super.method()`." |

---

## Q20. Exception handling — hierarchy, checked vs unchecked, throw vs throws 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Say this — the hierarchy first**

```
                    Throwable
                    /        \
              Error            Exception
        (don't catch)         /         \
     OutOfMemoryError   RuntimeException   Checked Exceptions
     StackOverflowError  (UNCHECKED)         (must handle)
                              |                    |
                    NullPointerException      IOException
                    ArrayIndexOutOfBounds     SQLException
                    ArithmeticException       ClassNotFoundException
                    IllegalArgumentException  InterruptedException
```

> "`Error` represents JVM-level problems you shouldn't try to recover from. `Exception` is application-level and splits into two:
>
> **Checked** — the compiler forces you to handle or declare them. They represent recoverable external failures: file missing, network down. `IOException` when I read the Excel file is checked.
>
> **Unchecked** (`RuntimeException` and subclasses) — the compiler doesn't force handling; they signal programming bugs. `NullPointerException` from an uninitialised driver is unchecked.
>
> **`throw` vs `throws`:** `throw` is a statement that actually raises an exception object at runtime. `throws` is a method-signature declaration that delegates handling to the caller."

**Selenium's exception family — expect this follow-up**

| Exception | Cause | My fix |
|---|---|---|
| `NoSuchElementException` | Locator wrong, or element not yet in DOM | Explicit wait on `presenceOfElementLocated`; verify locator |
| `ElementNotInteractableException` | In DOM but hidden or covered by an overlay | Wait for `elementToBeClickable`; dismiss the overlay; JS click as last resort |
| `StaleElementReferenceException` | Element reference held while DOM re-rendered | Re-locate the element instead of caching it — the main reason I prefer `By` over `@FindBy` |
| `TimeoutException` | Condition not met within the wait | Increase the wait, or check the condition is actually correct |
| `NoSuchWindowException` / `NoSuchFrameException` | Switched to a handle/frame that no longer exists | Re-fetch handles before switching |
| `WebDriverException` | Session died / browser crashed | Check driver-browser version alignment |
| `InvalidSelectorException` | Malformed XPath or CSS | Validate the selector in DevTools first |

**Try-catch-finally with try-with-resources**

```java
public static List<Map<String, String>> readSheet(String path, String sheetName) {
    List<Map<String, String>> rows = new ArrayList<>();

    // try-with-resources: both closed automatically, in reverse order, even if an exception is thrown
    try (FileInputStream fis = new FileInputStream(path);
         XSSFWorkbook workbook = new XSSFWorkbook(fis)) {

        XSSFSheet sheet = workbook.getSheet(sheetName);
        if (sheet == null) {
            throw new FrameworkException("Sheet not found: " + sheetName);  // 'throw' raises it now
        }
        // ... read rows ...

    } catch (FileNotFoundException e) {
        throw new FrameworkException("Excel file missing: " + path, e);     // most specific catch FIRST
    } catch (IOException e) {
        throw new FrameworkException("Failed reading Excel: " + path, e);   // broader catch AFTER
    }
    return rows;
}
```

> **Ordering rule:** catch blocks must go most-specific to most-general. Putting `catch (Exception e)` before `catch (IOException e)` is a compile error — the subclass block would be unreachable.

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"Can you catch multiple exceptions in one block?"* | "Yes, since Java 7: `catch (IOException \| SQLException e)`. The variable is implicitly final." |
| *"Custom exception — checked or unchecked?"* | "Extend `RuntimeException` for programming/config errors you don't want every caller to declare — that's what my `FrameworkException` does. Extend `Exception` when the caller genuinely can recover and should be forced to think about it." |
| *"Why wrap the original exception in the constructor?"* | "To preserve the stack trace. `new FrameworkException(msg, e)` keeps `e` as the cause, so the root cause is still visible in the log. Swallowing it destroys your only debugging evidence." |

---

## Q21. What is the use of the `finally` block? 🟠 **P1** `[L1] [L2]` ⏱ **60 sec**

**Why they ask.** It's on your Round-1 list, and the interesting part is the edge cases — which most candidates haven't prepared.

**Say this**

> "`finally` always executes, whether the `try` completed normally, threw an exception, or even hit a `return`. Its purpose is **guaranteed cleanup** — closing files, connections and drivers — so a resource never leaks along an exception path.
>
> ```java
> WebDriver driver = null;
> try {
>     driver = DriverFactory.initDriver("chrome");
>     driver.get(url);
>     // an exception here would skip everything below in try...
> } catch (Exception e) {
>     ScreenshotUtil.capture(driver, "failure");
> } finally {
>     if (driver != null) driver.quit();   // ...but this still runs — no orphaned browser process
> }
> ```
>
> That said, in my framework I don't hand-write this. TestNG's `@AfterMethod(alwaysRun = true)` gives me the same guarantee at the test level, and `try-with-resources` handles it for streams. So `finally` is mostly for cleanup that neither of those covers."

### The four cases where `finally` does NOT run — *know these*

1. **`System.exit()`** inside the try — JVM terminates immediately
2. **JVM crash** or the process being killed (`kill -9`)
3. **The thread is killed** or the daemon thread's JVM exits
4. **Infinite loop / deadlock** in the try — control never leaves

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"If both try and finally have a `return`, which wins?"* | "**`finally` wins** — it overrides the try's return value. This is why returning from `finally` is considered bad practice: it silently discards results and can even swallow an exception." |
| *"Can you have try-finally without catch?"* | "Yes. It's valid when you want guaranteed cleanup but intend to let the exception propagate to the caller." |
| *"finally vs finalize vs final?"* | "Three unrelated things. `final` is a keyword — non-reassignable variable, non-overridable method, non-extendable class. `finally` is a cleanup block. `finalize()` was a method called before garbage collection — unreliable, and deprecated since Java 9." |

---

## Q22. Comparable vs Comparator 🟠 **P1** `[L2]` ⏱ **75 sec**

**Why they ask.** On your Round-1 list. It tests whether you can sort custom objects — and it's a natural bridge into Java 8 lambdas.

| | Comparable | Comparator |
|---|---|---|
| **Package** | `java.lang` | `java.util` |
| **Method** | `compareTo(T o)` — one argument | `compare(T o1, T o2)` — two arguments |
| **Where it lives** | **Inside** the class being sorted | **Outside**, as a separate class or lambda |
| **Sort orders** | One — the class's "natural" order | Unlimited — one Comparator each |
| **Modifies the class?** | ✅ Yes, must implement the interface | ❌ No — works on classes you can't edit |
| **Used by** | `Collections.sort(list)`, `Arrays.sort(arr)` | `Collections.sort(list, comparator)` |

**Say this**

> "`Comparable` defines a single natural ordering **inside** the class. `Comparator` defines ordering **outside** it, so you can have many, and you can sort classes whose source you don't own.
>
> The decision rule: if there's one obvious default order, make it `Comparable`. If you need multiple orderings, or you can't modify the class, use `Comparator`."

```java
// ---------- Comparable: ONE natural order, baked into the class ----------
public class Vehicle implements Comparable<Vehicle> {
    private String model;
    private double onRoadPrice;
    private int bookingCount;

    @Override
    public int compareTo(Vehicle other) {
        // Contract: negative = this first, 0 = equal, positive = other first
        return Double.compare(this.onRoadPrice, other.onRoadPrice);  // natural order = price ascending
    }
    // getters omitted
}

Collections.sort(vehicleList);      // uses compareTo() — no second argument needed
```

```java
// ---------- Comparator: MANY orders, defined outside the class ----------

// Pre-Java 8: anonymous inner class
Comparator<Vehicle> byModel = new Comparator<Vehicle>() {
    @Override
    public int compare(Vehicle a, Vehicle b) {
        return a.getModel().compareTo(b.getModel());
    }
};

// Java 8 lambda — same thing, far shorter
Comparator<Vehicle> byPriceDesc = (a, b) -> Double.compare(b.getOnRoadPrice(), a.getOnRoadPrice());

// Java 8 method reference — cleanest, and what I actually use
vehicleList.sort(Comparator.comparing(Vehicle::getModel));                    // by model, ascending
vehicleList.sort(Comparator.comparingDouble(Vehicle::getOnRoadPrice).reversed());  // price, descending

// Chained: bookings descending, ties broken by price ascending
vehicleList.sort(Comparator.comparingInt(Vehicle::getBookingCount).reversed()
                           .thenComparingDouble(Vehicle::getOnRoadPrice));
```

**The project anchor**

> "In the dealer-portal inventory grid I validate sorting. The page lets you sort by price, by model name and by availability, so I build the expected order with a `Comparator` per column and compare it to what the UI rendered. `Comparable` wouldn't work there — I need three different orders on the same class."

**Follow-up trap:** *"What must `compareTo` return?"*
> "Negative, zero, or positive — not necessarily -1/0/1. And it should be consistent with `equals()`: if `compareTo` returns 0, `equals` should return true, otherwise sorted collections like `TreeSet` behave unpredictably. Also — never implement it as `a.price - b.price` on large ints, because integer overflow can flip the sign. Use `Integer.compare()`."

---

## Q23. Collections framework — List, Set, Map 🔴 **P0** `[L1]` ⏱ **90 sec**

**The hierarchy**

```
                Iterable
                    |
              Collection ──────────────┐            Map (separate — not a Collection)
             /     |      \            │             |
          List    Set    Queue         │      ┌──────┼───────┬──────────────┐
          /|\     /|\      |           │   HashMap  LinkedHashMap  TreeMap  HashTable
         / | \   / | \  ArrayDeque     │                                       |
ArrayList |  Vector |  \  PriorityQueue│                              ConcurrentHashMap
    LinkedList  HashSet  TreeSet       │
                  |                    │
            LinkedHashSet              │
```

**Say this**

> "There are three main interfaces, and I choose by the guarantee I need.
>
> **List** — ordered, allows duplicates, index-based. `ArrayList` is backed by a dynamic array: O(1) random access, but O(n) insertion in the middle because elements shift. `LinkedList` is a doubly-linked list: O(1) insertion and deletion once positioned, but O(n) access. **In practice `ArrayList` is right about 95% of the time** — we read far more than we insert mid-list.
>
> **Set** — no duplicates. `HashSet` is unordered and O(1). `LinkedHashSet` preserves insertion order. `TreeSet` keeps elements sorted at O(log n).
>
> **Map** — key–value pairs, unique keys. Not part of the Collection interface, which is a common trick question."

**Quick-reference decision table**

| Need | Use |
|---|---|
| Ordered list, fast reads | `ArrayList` |
| Heavy insert/delete at both ends | `LinkedList` / `ArrayDeque` |
| Unique values, don't care about order | `HashSet` |
| Unique values, keep insertion order | `LinkedHashSet` |
| Unique values, auto-sorted | `TreeSet` |
| Key–value lookup | `HashMap` |
| Key–value, insertion order preserved | `LinkedHashMap` |
| Key–value, sorted by key | `TreeMap` |
| Thread-safe map | `ConcurrentHashMap` |

**The project anchor**

> "`List<Map<String,String>>` is my Excel data structure — a list of rows, each row a column-to-value map. `Set<String>` deduplicates the accessory codes when I validate that the configurator doesn't offer the same accessory twice. `List<WebElement>` from `findElements()` when I iterate the inventory grid. And `Set<String>` for window handles, since `getWindowHandles()` returns a Set."

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"ArrayList vs Vector?"* | "Both dynamic arrays, but `Vector` synchronises every method and grows by doubling, while `ArrayList` grows by ~50% and does no locking. `Vector` is legacy — for thread-safe lists use `Collections.synchronizedList()` or `CopyOnWriteArrayList`." |
| *"How does HashSet ensure uniqueness?"* | "It's backed by a `HashMap` — elements become keys with a dummy value. So uniqueness comes from `hashCode()` and `equals()` on your object. If you don't override them for a custom class, duplicates *will* get in." |
| *"Fail-fast vs fail-safe iterator?"* | "Fail-fast (`ArrayList`, `HashMap`) throws `ConcurrentModificationException` if the collection is structurally modified while iterating. Fail-safe (`ConcurrentHashMap`, `CopyOnWriteArrayList`) iterates a snapshot, so no exception, but you may not see the newest changes. To remove during iteration, use `Iterator.remove()`." |

---

## Q24. The `static` keyword — variables, methods, blocks 🟠 **P1** `[L1] [L2]` ⏱ **75 sec**

**Say this**

> "`static` means the member belongs to the **class**, not to any instance. There's exactly one copy, shared, loaded when the class is first loaded — before any object exists.
>
> **Static variable** — one shared copy. Changing it through one object changes it for all.
> **Static method** — callable without an object, e.g. `DriverFactory.getDriver()`. It cannot access instance members, because there's no `this`.
> **Static block** — runs once when the class loads, before any constructor. Used for one-time initialisation.
> **Static nested class** — a nested class that doesn't need an outer instance; the Builder pattern uses this."

```java
public class FrameworkConstants {
    // Loaded once at class-load time; the same value for every thread and test
    public static final int EXPLICIT_WAIT = 20;
    public static final String REPORT_PATH;                 // final but not initialised inline

    private static int testCounter = 0;                     // shared mutable state — one copy total

    static {                                                // STATIC BLOCK: runs once, at class load
        REPORT_PATH = System.getProperty("user.dir")        // computed value needs a block, not inline
                    + "/reports/Report_"
                    + LocalDateTime.now().format(DateTimeFormatter.ofPattern("ddMMyy_HHmmss"))
                    + ".html";
        System.out.println("Constants initialised — runs exactly once");
    }

    private FrameworkConstants() { }                        // private ctor: pure utility, never instantiate

    public static int nextTestId() {                        // static method: no object required to call
        return ++testCounter;                               // shared counter across all callers
    }
}
```

**Execution order — a favourite trick question**

> "Static block → instance initialiser block → constructor. And static blocks run in the order they're declared, all before *any* constructor. If a superclass is involved: parent static, child static, parent instance, parent constructor, child instance, child constructor."

**The project anchor**

> "`FrameworkConstants` is entirely static — one shared source of timeouts and paths, so changing a wait is one line. `ConfigReader.get()` is static so any class can reach config without holding a reference. And a static block builds my timestamped report path once per run, rather than each test generating a different filename."

**The trap they'll spring**

> "**Why is `main` static?** Because the JVM has to call it before any object exists. If it needed an instance, the JVM would face a chicken-and-egg problem."
>
> "**Should WebDriver be static?** Absolutely not — and this is the mistake that breaks parallel execution. A static driver is shared across all threads, so thread B closes thread A's browser. That's exactly why I use `ThreadLocal<WebDriver>`: static access point, but per-thread storage."

---

## Q25. NullPointerException — causes and prevention 🟠 **P1** `[L1] [L2]` ⏱ **60 sec**

**Why they ask.** It's on your Round-2 list. They want to know how you **debug**, not just the definition.

**Say this**

> "It's an unchecked runtime exception thrown when you invoke a member on a reference that points to `null`. Five common causes:
>
> 1. Calling a method on an uninitialised object — `driver.get()` when `driver` is null
> 2. Accessing a field of a null object
> 3. `.length` on a null array, or `.get()` on a null collection
> 4. Autounboxing a null wrapper — `int x = map.get("missing")` where the value is a null `Integer`
> 5. Returning null from a method whose caller doesn't check"

**The three NPEs that actually happen in a Selenium framework**

| Symptom | Real cause |
|---|---|
| `driver` is null in `@Test` | `@BeforeMethod` failed, or `ThreadLocal.get()` returned null because setup ran on a different thread |
| Page object field is null | Used `@FindBy` without calling `PageFactory.initElements(driver, this)` in the constructor |
| Config value is null | Property key typo, or the wrong environment file loaded — `getProperty()` returns null silently rather than throwing |

**Prevention — five techniques**

```java
// 1. Guard before use
if (driver != null) driver.quit();

// 2. Objects.requireNonNull — fail fast with a clear message instead of a mystery NPE later
this.driver = Objects.requireNonNull(driver, "WebDriver cannot be null — check @BeforeMethod");

// 3. Null-safe comparison: put the literal FIRST so a null variable can't throw
if ("VX".equals(variant)) { ... }        // safe even if variant is null
// if (variant.equals("VX")) → NPE when variant is null

// 4. Optional for values that legitimately may be absent (Java 8)
Optional.ofNullable(ConfigReader.get().getProperty("headless"))
        .map(Boolean::parseBoolean)
        .orElse(false);                   // explicit default rather than a null surprise

// 5. Fail loudly in the config reader rather than returning null
public static String getRequired(String key) {
    String value = get().getProperty(key);
    if (value == null) throw new FrameworkException("Missing config key: " + key);  // clear root cause
    return value;
}
```

**Follow-up trap:** *"How do you debug an NPE in a nightly CI run?"*
> "Read the stack trace top-down — the first line gives the exact class and line. **Java 14+ helpful NullPointerExceptions** are a big help here: the message names the specific variable that was null, rather than just the line. Then I check whether `@BeforeMethod` actually completed, since a silent setup failure is the usual root cause. My `ITestListener` also logs the config values used, which quickly rules out an environment-file problem."

---

## Q26. Access modifiers — default vs public 🟡 **P2** `[L2]` ⏱ **45 sec**

| Modifier | Same class | Same package | Subclass (other pkg) | Anywhere |
|---|---|---|---|---|
| `private` | ✅ | ❌ | ❌ | ❌ |
| *default* (no keyword) | ✅ | ✅ | ❌ | ❌ |
| `protected` | ✅ | ✅ | ✅ | ❌ |
| `public` | ✅ | ✅ | ✅ | ✅ |

**Say this**

> "**Default**, also called package-private, is what you get with no keyword — visible only within the same package. **Public** is visible everywhere. The key difference is that default does *not* extend to a subclass in a different package, whereas `protected` does.
>
> The rule I follow: **start as private and widen only when required.**"

**The project anchor**

> "Locators in my page objects are `private` — no test should ever see an XPath. Helper methods in `BasePage` like `click()` are `protected`, so subclasses in the `pages` package can use them but test classes cannot. Business methods like `selectVariant()` are `public`, because tests are the intended callers. And `FrameworkConstants`' constructor is `private` so nobody instantiates a pure utility class."

**Follow-up trap:** *"Can a TestNG `@Test` method be private?"*
> "No — TestNG uses reflection to invoke it and needs public access, so a private `@Test` is silently skipped. Same for `@BeforeMethod`. This is a real trap: the test doesn't fail, it just never runs, which is worse."

---

## Q27. Method hiding in Java 🔵 **P3** `[L2]` ⏱ **45 sec**

**Why they ask.** It's on your Round-2 list, but it's rare and academic. **Know 4 sentences, don't over-invest.**

**Say this**

> "Method hiding happens when a subclass declares a **static** method with the same signature as a static method in its parent. It looks like overriding but isn't — static methods are bound at **compile time** based on the reference type, not the object type. So the parent's version is *hidden*, not overridden, and there's no runtime polymorphism."

```java
class Parent {
    static void show()    { System.out.println("Parent static");   }   // static → hidden, not overridden
    void display()        { System.out.println("Parent instance"); }   // instance → overridable
}

class Child extends Parent {
    static void show()    { System.out.println("Child static");    }   // HIDES Parent.show()
    @Override
    void display()        { System.out.println("Child instance");  }   // OVERRIDES Parent.display()
}

public class Demo {
    public static void main(String[] args) {
        Parent p = new Child();      // reference type Parent, object type Child

        p.show();                    // → "Parent static"   ← decided by REFERENCE type (compile time)
        p.display();                 // → "Child instance"  ← decided by OBJECT type (runtime)
    }
}
```

**The one-line takeaway:** *"Static methods are hidden by reference type; instance methods are overridden by object type. This is why `@Override` on a static method is a compile error."*

---

## Q28. What is multithreading in Java? 🟡 **P2** `[L1] [L2]` ⏱ **60 sec**

**Why they ask.** From your Image 1 list. For a QA role they're really asking about **parallel test execution**, so route the answer there.

**Say this**

> "Multithreading is running multiple threads concurrently within one process, each with its own execution path but sharing the process's memory. It improves CPU utilisation and throughput.
>
> Two ways to create one: **extend `Thread`**, or **implement `Runnable`** and pass it to a Thread. `Runnable` is preferred because it leaves your one inheritance slot free. In modern code you'd use an `ExecutorService` thread pool rather than managing threads by hand.
>
> **Thread lifecycle:** New → Runnable → Running → Blocked/Waiting → Terminated."

**Route it to testing — this is the answer they actually want**

> "For QA, the relevant application is **parallel test execution**. In TestNG I set `parallel="methods" thread-count="4"` in `testng.xml`, and TestNG runs each test method on its own thread. That took our regression from about 7 hours to 2.5.
>
> But it only works if the framework is thread-safe, which comes down to three rules:
>
> 1. **`ThreadLocal<WebDriver>`** — never a static driver, or threads fight over one browser
> 2. **No shared mutable state** between tests — no static counters or shared collections holding test state
> 3. **Independent test data** — two parallel tests must not book the same vehicle slot, so I generate unique data per thread
>
> In Playwright the equivalent is the built-in worker model, where each worker gets an isolated `BrowserContext` — same principle, handled by the framework rather than by me."

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"`synchronized` vs `volatile`?"* | "`synchronized` provides mutual exclusion — one thread in the block at a time. `volatile` only guarantees visibility — reads and writes go to main memory rather than a CPU cache — but gives no atomicity. `volatile` is for a flag; `synchronized` is for a compound operation." |
| *"`sleep()` vs `wait()`?"* | "`sleep()` is a static Thread method that pauses the thread and **keeps** any lock it holds. `wait()` is an Object method that **releases** the lock and waits until `notify()`. In Selenium this maps to why `Thread.sleep()` is bad practice — it's a blind fixed pause, versus `WebDriverWait` which polls a condition." |
| *"What's a race condition, in test terms?"* | "Two parallel tests mutating the same data. We hit exactly this — two threads booking the same test-drive slot, so one failed unpredictably. Fixed by generating slot data per thread instead of sharing a fixture." |

---

## Q29. Java 8 features you actually use 🟠 **P1** `[L2]` ⏱ **75 sec**

**Why they ask.** Image 1 explicitly mentions a Streams question, and Java 8 fluency is now assumed at 2+ years.

**Say this — five, with where each appears in my framework**

**1. Lambda expressions** — anonymous function, shorter than an inner class

```java
// Old way
list.forEach(new Consumer<String>() { public void accept(String s) { System.out.println(s); } });
// Lambda
list.forEach(s -> System.out.println(s));
// Method reference — shortest
list.forEach(System.out::println);
```

**2. Streams API** — declarative pipeline over a collection

```java
// Get all available VX-variant models from the inventory grid, sorted, as a List
List<String> availableVx = inventoryRows.stream()          // create the stream
        .filter(r -> "VX".equals(r.getVariant()))          // intermediate: keep matching rows
        .filter(Row::isAvailable)                          // intermediate: method reference predicate
        .map(Row::getModel)                                // intermediate: transform Row → String
        .distinct()                                        // intermediate: remove duplicates
        .sorted()                                          // intermediate: natural order
        .collect(Collectors.toList());                     // TERMINAL: nothing runs until this line
```

> "Key concept: intermediate operations are **lazy** — the pipeline doesn't execute until a terminal operation like `collect()`, `forEach()` or `count()` is called."

**3. Optional** — explicit absence instead of null

```java
Optional<Row> match = rows.stream().filter(r -> r.getModel().equals("Vitara")).findFirst();
String result = match.map(Row::getModel).orElse("NOT FOUND");   // no NPE, no null check
```

**4. `default` and `static` methods in interfaces** — how Java added methods to existing interfaces without breaking implementers

**5. New Date/Time API** — `LocalDate`, `LocalDateTime`, immutable and thread-safe, unlike the old `Date`/`Calendar`

```java
// Used for service-appointment date validation
String tomorrow = LocalDate.now().plusDays(1).format(DateTimeFormatter.ofPattern("dd/MM/yyyy"));
```

**The project anchor**

> "Streams are all over my validation code — filtering a `List<WebElement>` from `findElements()`, extracting text with `map(WebElement::getText)`, and asserting on the collected list. It replaced a lot of manual for-loops with add-to-list. And lambdas are exactly what `WebDriverWait.until()` takes — `wait.until(d -> d.findElements(locator).size() > 5)` is a lambda implementing the `Function` interface."

---
---

# Part 4 — Java Coding Programs (live editor)

> **These are asked in L2 with a shared online editor.** Three rules that matter more than the code:
>
> 1. **Narrate while you type.** "I'll use a HashSet because add() returns false on a duplicate, which gives me O(n) instead of O(n²)." Silence scores badly even with correct code.
> 2. **Ask about constraints first.** "Should I handle null and empty input? Case-sensitive?" This is a graded behaviour — it's what a tester is supposed to do.
> 3. **Give the brute-force answer, then optimise.** Working then better beats stuck while trying to be clever.

---

## Q30. Reverse a string 🔴 **P0** `[L2]` — *asked 3× across your sources*

**Ask first:** *"Should I reverse in place, or is returning a new string fine? Can I use StringBuilder or do you want the manual logic?"* — they usually want the **manual loop**, because `StringBuilder.reverse()` proves nothing.

```java
public class ReverseString {

    // ---------- Approach 1: StringBuilder — say this, then offer the manual version ----------
    public static String usingStringBuilder(String input) {
        if (input == null) return null;                          // guard: null in, null out
        return new StringBuilder(input).reverse().toString();    // built-in — O(n), but shows no logic
    }

    // ---------- Approach 2: char array, two pointers — THE ONE THEY WANT ----------
    public static String usingTwoPointers(String input) {
        if (input == null || input.length() <= 1) return input;  // nothing to reverse

        char[] chars = input.toCharArray();                      // Strings are immutable, so work on an array
        int left = 0;                                            // pointer starting at the front
        int right = chars.length - 1;                            // pointer starting at the back

        while (left < right) {                                   // stop when they meet in the middle
            char temp = chars[left];                             // hold the left character
            chars[left] = chars[right];                          // move right character to the left slot
            chars[right] = temp;                                 // put the held character on the right
            left++;                                              // walk inward from the left
            right--;                                             // walk inward from the right
        }
        return new String(chars);                                // rebuild a String from the array
    }

    // ---------- Approach 3: simple backward loop — easiest to explain under pressure ----------
    public static String usingLoop(String input) {
        String reversed = "";                                    // NOTE: O(n²) — new String each iteration
        for (int i = input.length() - 1; i >= 0; i--) {           // walk from last index down to 0
            reversed += input.charAt(i);                          // append each character
        }
        return reversed;
    }

    // ---------- Approach 4: recursion — only if they ask for it ----------
    public static String usingRecursion(String input) {
        if (input.isEmpty()) return input;                       // base case stops the recursion
        return usingRecursion(input.substring(1)) + input.charAt(0);  // reverse the tail, append the head
    }

    public static void main(String[] args) {
        System.out.println(usingTwoPointers("AutoConnect"));     // → tcennoCotuA
    }
}
```

**Complexity to state out loud:** *"Two-pointer is O(n) time and O(n) space for the char array. The string-concatenation loop is O(n²) because each `+=` creates a new String — I'd avoid it in real code."*

**Bonus they often chain: reverse the *words*, not the characters**

```java
public static String reverseWordOrder(String sentence) {
    String[] words = sentence.trim().split("\\s+");   // split on one-or-more whitespace, handles double spaces
    Collections.reverse(Arrays.asList(words));        // asList wraps the SAME array, so this reverses in place
    return String.join(" ", words);                   // rejoin with single spaces
}
// "book a test drive" → "drive test a book"
```

---

## Q31. Find duplicate elements in an array 🔴 **P0** `[L2]` — *asked 3× across your sources*

**Ask first:** *"Do you want each duplicate reported once, or with its count? And can I use collections?"*

```java
import java.util.*;
import java.util.stream.*;

public class FindDuplicates {

    // ---------- Approach 1: HashSet — O(n), the answer to give first ----------
    public static Set<Integer> usingSet(int[] arr) {
        Set<Integer> seen = new HashSet<>();          // everything encountered so far
        Set<Integer> duplicates = new LinkedHashSet<>();  // LinkedHashSet keeps first-seen order

        for (int num : arr) {
            if (!seen.add(num)) {                    // add() returns FALSE if already present — the key trick
                duplicates.add(num);                 // so a false return means it's a duplicate
            }
        }
        return duplicates;
    }

    // ---------- Approach 2: HashMap — when they want COUNTS ----------
    public static Map<Integer, Integer> withCounts(int[] arr) {
        Map<Integer, Integer> freq = new LinkedHashMap<>();
        for (int num : arr) {
            freq.merge(num, 1, Integer::sum);        // insert 1, or add 1 to the existing value
        }
        // keep only entries appearing more than once
        return freq.entrySet().stream()
                   .filter(e -> e.getValue() > 1)
                   .collect(Collectors.toMap(Map.Entry::getKey, Map.Entry::getValue,
                                             (a, b) -> a, LinkedHashMap::new));
    }

    // ---------- Approach 3: nested loop — mention it, then explain why you won't use it ----------
    public static void bruteForce(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {   // compare each element with every later element
                if (arr[i] == arr[j]) {
                    System.out.println("Duplicate: " + arr[i]);
                    break;                              // break so the same value isn't printed repeatedly
                }
            }
        }
        // O(n²) — fine for 10 elements, unacceptable for 100,000
    }

    public static void main(String[] args) {
        int[] arr = {4, 2, 7, 2, 9, 4, 4, 1};
        System.out.println(usingSet(arr));       // → [2, 4]
        System.out.println(withCounts(arr));     // → {4=3, 2=2}
    }
}
```

---

## Q32. Find duplicates using Java Streams 🟠 **P1** `[L2]` — *from Image 1, Q13*

**Why they ask.** Specifically listed in your image. They want to see Java 8 fluency, not just loops.

```java
import java.util.*;
import java.util.function.Function;
import java.util.stream.*;

public class StreamDuplicates {

    // ---------- Cleanest: Set.add() side-effect inside a filter ----------
    public static Set<String> duplicates(List<String> list) {
        Set<String> seen = new HashSet<>();          // accumulator outside the stream
        return list.stream()
                   .filter(e -> !seen.add(e))        // add() false ⇒ already seen ⇒ it's a duplicate
                   .collect(Collectors.toSet());
    }

    // ---------- groupingBy: gives you counts as well ----------
    public static Map<String, Long> duplicateCounts(List<String> list) {
        return list.stream()
                .collect(Collectors.groupingBy(      // group the elements...
                        Function.identity(),         // ...keyed by the element itself
                        Collectors.counting()))      // ...value = how many times it occurred
                .entrySet().stream()
                .filter(e -> e.getValue() > 1)       // keep only the duplicated keys
                .collect(Collectors.toMap(Map.Entry::getKey, Map.Entry::getValue));
    }

    // ---------- First duplicate only ----------
    public static Optional<String> firstDuplicate(List<String> list) {
        Set<String> seen = new HashSet<>();
        return list.stream()
                   .filter(e -> !seen.add(e))
                   .findFirst();                     // short-circuits — stops at the first match
    }

    // ---------- Duplicate CHARACTERS in a string ----------
    public static Set<Character> duplicateChars(String s) {
        Set<Character> seen = new HashSet<>();
        return s.chars()                             // IntStream of code points
                .mapToObj(c -> (char) c)             // convert int → Character
                .filter(c -> !seen.add(c))
                .collect(Collectors.toSet());
    }

    public static void main(String[] args) {
        List<String> models = List.of("Vitara", "Baleno", "Vitara", "Swift", "Baleno", "Vitara");
        System.out.println(duplicates(models));       // → [Vitara, Baleno]
        System.out.println(duplicateCounts(models));  // → {Vitara=3, Baleno=2}
        System.out.println(duplicateChars("automobile")); // → [o]
    }
}
```

> **Say this while typing:** *"`!seen.add(e)` is the idiom — `add()` returns false when the element is already in the set, so a false return identifies a duplicate in a single pass. It's a side effect inside a filter, which purists dislike, but it's O(n) and it's the standard Java 8 solution."*

---

## Q33. Palindrome check 🔴 **P0** `[L2]`

**Ask first:** *"Ignore case and spaces? What about punctuation?"*

```java
public class Palindrome {

    // ---------- Two-pointer: O(n) time, O(1) extra space — the best answer ----------
    public static boolean isPalindrome(String input) {
        if (input == null) return false;

        String clean = input.toLowerCase().replaceAll("[^a-z0-9]", "");  // strip non-alphanumeric, normalise case
        int left = 0, right = clean.length() - 1;

        while (left < right) {
            if (clean.charAt(left) != clean.charAt(right)) return false;  // mismatch ⇒ not a palindrome, exit early
            left++;
            right--;
        }
        return true;                                   // pointers met with no mismatch
    }

    // ---------- Reverse-and-compare: easier to say, uses O(n) extra space ----------
    public static boolean usingReverse(String input) {
        String clean = input.toLowerCase().replaceAll("[^a-z0-9]", "");
        String reversed = new StringBuilder(clean).reverse().toString();
        return clean.equals(reversed);                 // .equals() NOT == — comparing content, not references
    }

    // ---------- Number palindrome — a common variant ----------
    public static boolean isNumberPalindrome(int num) {
        int original = num, reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;       // shift left, then append the last digit
            num /= 10;                                 // drop the last digit
        }
        return original == reversed;                   // primitives → == is correct here
    }

    public static void main(String[] args) {
        System.out.println(isPalindrome("A man, a plan, a canal: Panama"));  // true
        System.out.println(isNumberPalindrome(12321));                        // true
    }
}
```

---

## Q34. Separate characters and digits from a string 🟠 **P1** `[L2]` — *from your L2 list*

```java
public class SeparateCharsAndDigits {

    public static void separate(String input) {
        StringBuilder letters = new StringBuilder();      // StringBuilder, not String +=, to avoid O(n²)
        StringBuilder digits  = new StringBuilder();
        StringBuilder others  = new StringBuilder();      // shows you thought about the third case

        for (char c : input.toCharArray()) {              // walk each character once → O(n)
            if (Character.isDigit(c)) {                   // built-in, safer than c >= '0' && c <= '9'
                digits.append(c);
            } else if (Character.isLetter(c)) {           // handles Unicode letters, not just A–Z
                letters.append(c);
            } else {
                others.append(c);                        // spaces, symbols, punctuation
            }
        }

        System.out.println("Letters : " + letters);
        System.out.println("Digits  : " + digits);
        System.out.println("Others  : " + others);
    }

    // ---------- Regex one-liner alternative — mention it as the concise option ----------
    public static void usingRegex(String input) {
        System.out.println("Letters : " + input.replaceAll("[^a-zA-Z]", ""));  // delete non-letters
        System.out.println("Digits  : " + input.replaceAll("[^0-9]", ""));     // delete non-digits
    }

    // ---------- Streams alternative ----------
    public static void usingStreams(String input) {
        String d = input.chars().filter(Character::isDigit)
                        .mapToObj(c -> String.valueOf((char) c))
                        .collect(Collectors.joining());
        System.out.println("Digits: " + d);
    }

    public static void main(String[] args) {
        separate("Vitara-VX 2026 @Pune");
        // Letters : VitaraVXPune
        // Digits  : 2026
        // Others  : - @
    }
}
```

**Say this:** *"I use `Character.isDigit()` and `Character.isLetter()` rather than ASCII range comparisons — they're clearer and Unicode-correct. And `StringBuilder` rather than string concatenation, because `+=` in a loop is O(n²)."*

---

## Q35. Count occurrences of each character 🟡 **P2** `[L2]`

```java
public class CharFrequency {

    public static void count(String input) {
        // LinkedHashMap preserves first-appearance order — nicer output than HashMap
        Map<Character, Integer> freq = new LinkedHashMap<>();

        for (char c : input.replaceAll("\\s", "").toLowerCase().toCharArray()) {  // drop spaces, normalise case
            freq.put(c, freq.getOrDefault(c, 0) + 1);   // getOrDefault avoids a null check on first occurrence
        }
        freq.forEach((k, v) -> System.out.println(k + " → " + v));
    }

    // Streams version
    public static Map<String, Long> streamCount(String input) {
        return input.chars()
                .mapToObj(c -> String.valueOf((char) c))
                .collect(Collectors.groupingBy(Function.identity(),
                         LinkedHashMap::new,             // keep insertion order
                         Collectors.counting()));
    }

    public static void main(String[] args) { count("automobile"); }
}
```

---

## Q36. Second highest element in an array 🟡 **P2** `[L2]`

> **Note:** the SQL version of this question is in **Part 8, Q86** — they sometimes ask both.

```java
public class SecondHighest {

    // Single pass, O(n) — better than sorting's O(n log n). Say this out loud.
    public static int find(int[] arr) {
        if (arr == null || arr.length < 2) throw new IllegalArgumentException("Need at least 2 elements");

        int highest = Integer.MIN_VALUE;
        int second  = Integer.MIN_VALUE;

        for (int num : arr) {
            if (num > highest) {
                second = highest;        // the old highest is demoted to second
                highest = num;           // the new value becomes highest
            } else if (num > second && num != highest) {
                second = num;            // beats second but not highest; != highest skips duplicates
            }
        }
        if (second == Integer.MIN_VALUE) throw new IllegalStateException("No distinct second highest");
        return second;
    }

    // Streams version — concise, but O(n log n) because of the sort
    public static int usingStream(int[] arr) {
        return Arrays.stream(arr)
                     .distinct()          // remove duplicates so {9,9,5} returns 5, not 9
                     .boxed()
                     .sorted(Comparator.reverseOrder())
                     .skip(1)             // skip the highest
                     .findFirst()
                     .orElseThrow(() -> new IllegalStateException("No second highest"));
    }

    public static void main(String[] args) {
        System.out.println(find(new int[]{12, 45, 7, 45, 33, 9}));   // → 33
    }
}
```

**The trap:** *"What if the array is {9, 9, 9}?"* — There's no distinct second highest. Say this before they ask; handling it is what earns the mark.

---

## Q37. Read data from Excel using Apache POI + TestNG DataProvider 🔴 **P0** `[L1] [L2]` — *asked 2× in your list*

**Why they ask.** It's on both your L1 and L2 lists, and it's the single most practical coding question for a QA role — data-driven testing is the whole point of a framework.

**Setup — pom.xml dependency**

```xml
<dependency>
    <groupId>org.apache.poi</groupId>
    <artifactId>poi-ooxml</artifactId>   <!-- ooxml = .xlsx support; plain 'poi' is only .xls -->
    <version>5.2.5</version>
</dependency>
```

**ExcelUtil**

```java
package com.autoconnect.utils;

import org.apache.poi.ss.usermodel.*;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.*;

public class ExcelUtil {

    /**
     * Reads a sheet into a 2-D Object array — the exact shape TestNG's @DataProvider needs.
     */
    public static Object[][] getSheetData(String filePath, String sheetName) {

        // try-with-resources closes both the stream and the workbook automatically
        try (FileInputStream fis = new FileInputStream(filePath);
             Workbook workbook = new XSSFWorkbook(fis)) {        // XSSF = .xlsx; HSSF would be .xls

            Sheet sheet = workbook.getSheet(sheetName);
            if (sheet == null) {
                throw new RuntimeException("Sheet not found: " + sheetName);   // fail fast with a clear message
            }

            int rowCount = sheet.getLastRowNum();                 // 0-based index of the last row
            int colCount = sheet.getRow(0).getLastCellNum();      // 1-based COUNT of columns (note the difference)

            // rowCount (not +1) because row 0 is the header and we skip it
            Object[][] data = new Object[rowCount][colCount];

            for (int i = 1; i <= rowCount; i++) {                 // start at 1 to skip the header row
                Row row = sheet.getRow(i);
                for (int j = 0; j < colCount; j++) {
                    Cell cell = row.getCell(j, Row.MissingCellPolicy.CREATE_NULL_AS_BLANK);  // avoid NPE on empty cells
                    data[i - 1][j] = getCellValueAsString(cell);  // i-1 because our array is 0-based
                }
            }
            return data;

        } catch (IOException e) {
            throw new RuntimeException("Failed to read Excel: " + filePath, e);  // preserve the root cause
        }
    }

    /** Cells can be numeric, string, boolean or formula — normalise everything to String. */
    private static String getCellValueAsString(Cell cell) {
        DataFormatter formatter = new DataFormatter();   // reads a cell exactly as Excel DISPLAYS it
        return formatter.formatCellValue(cell).trim();   // avoids 12345 becoming "12345.0"
    }

    /** Alternative shape: list of column-name → value maps. More readable in tests. */
    public static List<Map<String, String>> getSheetAsMaps(String filePath, String sheetName) {
        List<Map<String, String>> rows = new ArrayList<>();
        try (FileInputStream fis = new FileInputStream(filePath);
             Workbook wb = new XSSFWorkbook(fis)) {

            Sheet sheet = wb.getSheet(sheetName);
            Row header = sheet.getRow(0);                          // header row supplies the map keys

            for (int i = 1; i <= sheet.getLastRowNum(); i++) {
                Row row = sheet.getRow(i);
                Map<String, String> rowMap = new LinkedHashMap<>();
                for (int j = 0; j < header.getLastCellNum(); j++) {
                    rowMap.put(getCellValueAsString(header.getCell(j)),   // key   = column name
                               getCellValueAsString(row.getCell(j, Row.MissingCellPolicy.CREATE_NULL_AS_BLANK)));
                }
                rows.add(rowMap);
            }
        } catch (IOException e) {
            throw new RuntimeException("Failed to read Excel: " + filePath, e);
        }
        return rows;
    }
}
```

**Wiring it into TestNG**

```java
public class PricingTest extends BaseTest {

    @DataProvider(name = "pricingData")
    public Object[][] pricingData() {
        // TestNG calls this BEFORE the test and runs the test once per returned row
        return ExcelUtil.getSheetData(
                "src/test/resources/testdata/pricing_combinations.xlsx", "OnRoadPrice");
    }

    // dataProvider links this test to the method above; TestNG injects one row per execution
    @Test(dataProvider = "pricingData", groups = "regression")
    public void verifyOnRoadPrice(String model, String variant, String state, String expectedPrice) {

        double actual = new ConfiguratorPage(DriverFactory.getDriver())
                            .selectModel(model)
                            .selectVariant(variant)
                            .setRegistrationState(state)
                            .getOnRoadPrice();

        // delta of 1.0 absorbs rounding differences between UI display and expected value
        Assert.assertEquals(actual, Double.parseDouble(expectedPrice), 1.0,
            String.format("On-road price mismatch for %s %s in %s", model, variant, state));
    }
}
```

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"Why `getLastRowNum()` but `getLastCellNum()`?"* | "Deliberate POI inconsistency: `getLastRowNum()` returns a **0-based index**, `getLastCellNum()` returns a **1-based count**. So rows need `<=` in the loop and columns need `<`. Getting this wrong is the classic off-by-one in every POI tutorial." |
| *"How do you handle a numeric cell showing 12345.0?"* | "`DataFormatter.formatCellValue()` — it reads the cell as Excel displays it, so no trailing `.0`. Manually calling `getNumericCellValue()` returns a double and creates that problem." |
| *"XSSF vs HSSF?"* | "XSSF for `.xlsx` (XML-based, POI 3.5+), HSSF for the older binary `.xls`. `WorkbookFactory.create(file)` auto-detects if you need to support both." |
| *"Why Excel over CSV or JSON?"* | "Honestly, Excel mainly because non-technical stakeholders can edit it — our BA maintains the pricing combinations sheet directly. For anything programmatic I'd prefer JSON: no POI dependency, no cell-type handling, and it diffs cleanly in Git." |

---

## Q38. Read multiple values from a properties file 🟡 **P2** `[L2]` — *from your L2 list*

```java
public class PropertiesReader {

    public static void main(String[] args) throws IOException {
        Properties props = new Properties();

        // try-with-resources guarantees the stream closes even if load() throws
        try (FileInputStream fis = new FileInputStream("src/test/resources/config/qa.properties")) {
            props.load(fis);                       // parses every key=value line into the Properties object
        }

        // --- Read individual keys ---
        String baseUrl = props.getProperty("baseUrl");                    // null if the key is absent
        String browser = props.getProperty("browser", "chrome");          // 2nd arg = default if absent
        int timeout    = Integer.parseInt(props.getProperty("timeout"));  // properties are ALWAYS Strings

        // --- Iterate ALL keys (this is the "multiple data" part they're asking about) ---
        for (String key : props.stringPropertyNames()) {                  // every key in the file
            System.out.println(key + " = " + props.getProperty(key));
        }

        // --- Java 8 style ---
        props.forEach((k, v) -> System.out.println(k + " → " + v));

        // --- Read a comma-separated list from one property ---
        // browsers=chrome,firefox,edge
        String[] browsers = props.getProperty("browsers").split(",");
        Arrays.stream(browsers).map(String::trim).forEach(System.out::println);  // trim removes stray spaces
    }
}
```

**qa.properties**

```properties
baseUrl=https://qa.autoconnect.com
apiBaseUri=https://qa-api.autoconnect.com/v1
browser=chrome
headless=false
timeout=20
browsers=chrome,firefox,edge
dealerUsername=qa_dealer
```

**Say this:** *"Properties over hardcoding for three reasons: environment switching without a code change, no credentials in source control, and non-developers can change a URL. In my framework `ConfigReader` wraps this as a Singleton, and I pass `-Denv=uat` on the Maven command line to pick which file loads."*

**Follow-up trap:** *"Properties vs YAML vs JSON for config?"*
> "Properties is flat key-value and built into Java with zero dependencies — fine for our ~15 settings. YAML supports nesting and is more readable for complex config but needs SnakeYAML. JSON is good for structured test data. I use properties for environment config and JSON for API payloads."

---

## Q39. Swap two numbers without a third variable 🔵 **P3** `[L2]`

```java
public class Swap {
    public static void main(String[] args) {
        int a = 10, b = 20;

        // ---- Arithmetic method ----
        a = a + b;      // a = 30  (a now holds the sum)
        b = a - b;      // b = 10  (sum minus original b = original a)
        a = a - b;      // a = 20  (sum minus new b = original b)
        System.out.println(a + " " + b);       // → 20 10
        // ⚠️ Risk: a + b can overflow if both are near Integer.MAX_VALUE

        // ---- XOR method — no overflow risk ----
        int x = 5, y = 9;
        x = x ^ y;      // x holds the XOR of both
        y = x ^ y;      // XOR cancels y, leaving original x
        x = x ^ y;      // XOR cancels new y, leaving original y
        System.out.println(x + " " + y);       // → 9 5
    }
}
```

**Say this:** *"I'd mention that in real code I'd just use a temp variable — it's clearer and the compiler doesn't care. These tricks are interview exercises, and the arithmetic version has a genuine overflow bug."* That framing scores better than the trick itself.


---
---

# Part 5 — Selenium — Concepts & Handling

> **The largest technical block, and the highest-density source of L1 questions.** Every answer here should end with *"…and in my project I hit this when…"* — that pivot is worth more than the technical content.

---

## Q40. findElement() vs findElements() 🔴 **P0** `[L1]` ⏱ **45 sec**

| | `findElement()` | `findElements()` |
|---|---|---|
| **Returns** | A single `WebElement` | `List<WebElement>` |
| **If nothing matches** | Throws `NoSuchElementException` | Returns an **empty list** — no exception |
| **If many match** | Returns the **first** in DOM order | Returns all of them |
| **With implicit wait** | Waits, then throws | Waits the full duration, then returns empty |
| **Typical use** | Acting on one element | Counting, iterating, **presence checks** |

**Say this — and lead with the practical consequence**

> "The important difference isn't the return type, it's the failure behaviour. `findElement()` throws; `findElements()` returns an empty list. That makes `findElements()` the right tool for a **presence check** — I don't need a try-catch:
>
> ```java
> // ❌ Ugly: exception-driven control flow
> try { driver.findElement(By.id("offer-banner")); return true; }
> catch (NoSuchElementException e) { return false; }
>
> // ✅ Clean: no exception involved
> public boolean isOfferBannerDisplayed() {
>     return !driver.findElements(By.id("offer-banner")).isEmpty();  // empty list = not present
> }
> ```
>
> The catch is performance: with a 10-second implicit wait, `findElements()` on a non-existent element burns the **full 10 seconds** before returning empty. So for negative checks I temporarily reduce the timeout or use an explicit wait on `invisibilityOf`."

**The project anchor**

> "In the dealer inventory grid I use `findElements()` to get all rows, then assert the count matches the API response. And on the configurator I use it to check whether a promotional banner is showing, since a missing banner is a valid state rather than an error."

---

## Q41. Locators in Selenium — and XPath vs CSS 🔴 **P0** `[L1]` ⏱ **75 sec**

**The eight locators, in my order of preference**

| # | Locator | Why this rank |
|---|---|---|
| 1 | **`id`** | Fastest, meant to be unique. Always first choice |
| 2 | **`name`** | Fast, common on form fields |
| 3 | **`cssSelector`** | Faster than XPath, cleaner syntax. My default when there's no ID |
| 4 | **`className`** | Fine if genuinely unique; often isn't |
| 5 | **`linkText`** | Only for `<a>` tags, exact text |
| 6 | **`partialLinkText`** | Only `<a>`, partial text — brittle |
| 7 | **`tagName`** | Too broad alone; useful with `findElements()` |
| 8 | **`xpath`** | Most powerful, slowest. When I need text matching or to traverse **upward** |

**The best answer nobody gives:** *"Actually, my first preference is a dedicated test attribute. On the configurator I asked our devs to add `data-test` attributes to the key elements. `By.cssSelector("[data-test='on-road-price']")` never breaks from a CSS refactor or a copy change, because it exists only for testing. Getting that convention adopted removed a large share of our locator maintenance."*

> That answer signals you influence the dev team, not just react to them. Panels notice it.

### XPath vs CSS

| | XPath | CSS Selector |
|---|---|---|
| **Speed** | Slower | Faster (native browser engine) |
| **Direction** | **Bi-directional** — can go to parent/ancestor | Forward only — no parent traversal |
| **Text matching** | ✅ `text()`, `contains()` | ❌ Not possible |
| **Axes** | ✅ following-sibling, ancestor, etc. | Limited (`+`, `~`, `>`) |
| **Indexing** | `[1]` — **1-based** | `:nth-child(1)` — 1-based |
| **Readability** | Verbose | Concise |

**When I must use XPath — the two cases**

```java
// 1. Locating by visible TEXT — impossible in CSS
By.xpath("//button[normalize-space()='Book Test Drive']")

// 2. Traversing UPWARD to a parent/ancestor — impossible in CSS
// "find the price cell in the same row as the model named Vitara"
By.xpath("//td[text()='Vitara']/parent::tr/td[@class='price']")
By.xpath("//td[text()='Vitara']/ancestor::tr//span[@data-test='price']")
```

**XPath cheat sheet — memorise these five patterns**

```java
"//tag[@attr='value']"                          // basic attribute match
"//input[@type='text' and @name='pincode']"     // multiple conditions with and/or
"//div[contains(@class,'swatch')]"              // partial attribute — for dynamic class names
"//span[starts-with(@id,'price_')]"             // partial from the start — for generated IDs
"//button[normalize-space()='Proceed']"         // text match, whitespace-insensitive (better than text())
"//label[text()='Variant']/following-sibling::select"   // axis traversal
"(//div[@class='product-card'])[7]"             // 7th match — note the brackets around the whole expression
```

> **Why `normalize-space()` beats `text()`:** `text()='Proceed'` fails if the HTML contains `Proceed ` with a trailing space or newline. `normalize-space()` collapses all whitespace, so it matches regardless of formatting. Mentioning this reads as real experience.

---

## Q42. How do you handle dynamic web elements? 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Why they ask.** Appears **twice** in your source lists. It's the question that separates people who've maintained a suite from people who've only written one.

**Say this — first define what "dynamic" actually means, because there are three different problems**

> "Dynamic elements come in three flavours, and each needs a different fix.
>
> **1. Dynamic attributes** — IDs generated per session, like `price_a8f3c9`. **Fix:** partial matching on the stable part.
> ```java
> By.xpath("//span[starts-with(@id,'price_')]")
> By.cssSelector("span[id^='price_']")     // ^= starts with
> By.cssSelector("div[class*='swatch']")   // *= contains
> By.cssSelector("input[id$='_pincode']")  // $= ends with
> ```
>
> **2. Dynamic timing** — the element exists but appears late, because the price recalculates via an async API call. **Fix:** explicit waits on the right condition, never `Thread.sleep()`.
>
> **3. Dynamic position** — the element's index changes with the data, like the 7th car in a search result. **Fix:** locate relative to something stable — usually its text or a sibling — rather than by index."

**Six techniques, with code**

```java
// 1. Relative to stable text — the most robust technique
By.xpath("//td[normalize-space()='Vitara']/following-sibling::td[@class='stock']")

// 2. Parameterised locator built at runtime — my standard pattern for lists/grids
private By colourSwatch(String colour) {
    return By.cssSelector("div.swatch[data-colour='" + colour + "']");
}

// 3. Explicit wait on the exact condition needed
wait.until(ExpectedConditions.textToBePresentInElementLocated(priceLabel, "₹"));

// 4. Wait for a value to CHANGE — for async price recalculation
public void waitForPriceUpdate(String oldPrice) {
    wait.until(d -> !d.findElement(priceLabel).getText().equals(oldPrice));  // lambda as the condition
}

// 5. Multiple locator fallback — when the UI has two possible renderings
public WebElement findWithFallback(By primary, By fallback) {
    List<WebElement> found = driver.findElements(primary);
    return found.isEmpty() ? driver.findElement(fallback) : found.get(0);
}

// 6. Selenium 4 relative locators — readable for visually-anchored elements
WebElement priceBelowModel = driver.findElement(
        RelativeLocator.with(By.tagName("span")).below(By.id("model-name")));
```

**The project anchor — make this concrete**

> "The clearest case in my project is the colour swatches on the configurator. They have no static IDs — the class names include a hash that changes per build. So I locate by the `data-colour` attribute, which the devs added at my request, and build the locator at runtime from the colour name my test data supplies. Before that we were using index-based XPaths and the tests broke every time marketing reordered the colours."

**Follow-up trap:** *"How would you handle an element whose text changes based on locale?"*
> "Never assert or locate on the displayed string. Locate by a `data-test` attribute or an ID, and pull the expected text from the same resource bundle the application uses. Hardcoding English text is how a suite breaks the moment localisation ships."

---

## Q43. Explain Implicit Wait, Explicit Wait and Fluent Wait 🔴 **P0** `[L1]` ⏱ **90 sec**

**Why they ask.** Appears **3 times** across your sources. Guaranteed question.

| | Implicit Wait | Explicit Wait | Fluent Wait |
|---|---|---|---|
| **Scope** | **Global** — every `findElement` for the driver's life | **Local** — one element, one condition | Local, fully configurable |
| **Waits for** | Element **presence** in the DOM only | Any `ExpectedCondition` — visible, clickable, text present… | Any condition |
| **Polling interval** | ~500 ms (fixed, not configurable) | 500 ms (configurable in Selenium 4) | ✅ Fully configurable |
| **Ignore exceptions** | N/A | Ignores `NoSuchElement` by default | ✅ You choose which to ignore |
| **On timeout** | `NoSuchElementException` | `TimeoutException` | `TimeoutException` |
| **Class** | `driver.manage().timeouts()` | `WebDriverWait` | `FluentWait` |

**Code — all three**

```java
// ---------- IMPLICIT: set once, applies to every findElement afterwards ----------
driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(10));
// Selenium polls the DOM for up to 10s for element PRESENCE.
// It does NOT wait for visibility or clickability — this is the key limitation.


// ---------- EXPLICIT: per-element, condition-specific ----------
WebDriverWait wait = new WebDriverWait(driver, Duration.ofSeconds(20));

wait.until(ExpectedConditions.elementToBeClickable(By.id("book-btn"))).click();     // present + visible + enabled
wait.until(ExpectedConditions.visibilityOfElementLocated(By.id("price")));          // in DOM AND displayed
wait.until(ExpectedConditions.presenceOfElementLocated(By.id("hidden-token")));     // in DOM, may be hidden
wait.until(ExpectedConditions.invisibilityOfElementLocated(By.className("loader"))); // spinner GONE
wait.until(ExpectedConditions.textToBePresentInElementLocated(By.id("price"), "₹"));
wait.until(ExpectedConditions.numberOfElementsToBeMoreThan(By.cssSelector(".card"), 6));
wait.until(ExpectedConditions.alertIsPresent());
wait.until(ExpectedConditions.frameToBeAvailableAndSwitchToIt("payment-frame"));


// ---------- FLUENT: control polling and ignored exceptions ----------
Wait<WebDriver> fluentWait = new FluentWait<>(driver)
        .withTimeout(Duration.ofSeconds(30))          // total time to keep trying
        .pollingEvery(Duration.ofSeconds(2))          // check every 2s instead of 500ms — fewer DOM hits
        .ignoring(NoSuchElementException.class)       // don't fail while it's still absent
        .ignoring(StaleElementReferenceException.class);  // survive a DOM re-render mid-wait

WebElement price = fluentWait.until(d -> {
    WebElement el = d.findElement(By.id("on-road-price"));
    return el.getText().contains("₹") ? el : null;    // return null to keep polling, non-null to finish
});
```

**The critical warning — say this unprompted, it's a differentiator**

> "**Never mix implicit and explicit waits.** The behaviour becomes unpredictable — the two mechanisms compound, and you can get waits far longer than either value, or intermittent failures that are extremely hard to diagnose. It's documented as a bad practice by the Selenium team.
>
> In my framework I set implicit wait to **zero** and use explicit waits exclusively, centralised in `BasePage`. That gives one predictable waiting strategy, and because it's in the base class, no individual page or test can get it wrong."

**And the absolute rule**

> "`Thread.sleep()` is banned in our framework — it's a code-review rejection. It's a blind fixed pause: too short and the test is flaky, too long and you waste time on every single run. A 3-second sleep across 400 tests is 20 minutes of pure waiting. The only place I've ever accepted it is a one-off wait for a third-party animation with no detectable end state, and even then with a comment explaining why."

---

## Q44. When would you use implicit vs explicit wait? 🔴 **P0** `[L2]` ⏱ **45 sec**

**Why they ask.** On your Round-2 list. It's the *judgement* version of Q43 — don't just repeat the table.

**Say this**

> "My honest answer is that I use explicit waits almost exclusively, and I'd argue against implicit waits in a serious framework. Three reasons:
>
> **1. Implicit only waits for presence.** On an SPA, an element is frequently in the DOM long before it's interactable — our configurator renders the Proceed button disabled while pricing loads. Implicit wait returns immediately, then `.click()` throws `ElementNotInteractableException`. Explicit wait on `elementToBeClickable` handles it correctly.
>
> **2. Implicit slows down negative checks.** Checking that an error message is *absent* with a 10-second implicit wait costs 10 seconds every time.
>
> **3. Mixing them is genuinely dangerous** — unpredictable compounded timeouts.
>
> The one legitimate case for implicit wait is a **quick script or a stable legacy app** where you want a global safety net without writing waits everywhere. Our older dealer-portal suite does still use a small implicit wait, inherited from before I joined — but the newer code is all explicit."

> **Why this answer scores:** it takes a position, justifies it, and acknowledges the exception. Panels reward a defended opinion over a recited comparison.

---

## Q45. How do you handle dropdowns? 🔴 **P0** `[L1]` ⏱ **75 sec** — *appears 3× in your sources*

**Say this — there are three kinds, and this is the key insight**

> "The first thing I check is the HTML, because the technique depends entirely on it. `Select` only works on a real `<select>` tag — and most modern UIs don't use one."

### Type 1 — real `<select>` tag → use the `Select` class

```java
WebElement dd = driver.findElement(By.id("variant-select"));
Select select = new Select(dd);            // ⚠️ throws UnexpectedTagNameException if it isn't a <select>

select.selectByVisibleText("VX");          // most readable — matches the displayed text
select.selectByValue("vx_2026");           // matches the value="" attribute — most stable
select.selectByIndex(2);                   // 0-based — avoid, breaks when options are reordered

// --- Reading a dropdown ---
List<WebElement> allOptions = select.getOptions();                    // every <option>
WebElement selected = select.getFirstSelectedOption();                // currently chosen
List<WebElement> multi = select.getAllSelectedOptions();              // for multi-select
boolean isMulti = select.isMultiple();                                // has the 'multiple' attribute?

select.deselectByVisibleText("Roof Rails");  // deselect only works on multi-select dropdowns
select.deselectAll();

// Validate all options are present — a real test, not just an interaction
List<String> actual = select.getOptions().stream()
                            .map(WebElement::getText).map(String::trim)
                            .collect(Collectors.toList());
Assert.assertEquals(actual, List.of("LXI", "VXI", "ZXI", "VX"), "Variant options mismatch");
```

### Type 2 — custom dropdown built from `<div>`/`<ul>` → click, then click the option

```java
// Bootstrap/React-style dropdown: NO <select> tag, so Select class is useless
public void selectCustomDropdown(String optionText) {
    wait.until(ExpectedConditions.elementToBeClickable(dropdownToggle)).click();   // open the list

    // Wait for the options container to actually render before clicking into it
    wait.until(ExpectedConditions.visibilityOfElementLocated(By.cssSelector("ul.dropdown-options")));

    // Build the option locator dynamically from the desired text
    By option = By.xpath("//ul[@class='dropdown-options']//li[normalize-space()='" + optionText + "']");
    wait.until(ExpectedConditions.elementToBeClickable(option)).click();
}
```

### Type 3 — auto-suggest / type-ahead → type, wait for suggestions, pick

```java
// Our dealer-city search: suggestions arrive from an API as you type
public void selectFromAutoSuggest(String cityName) {
    WebElement input = wait.until(ExpectedConditions.elementToBeClickable(citySearchBox));
    input.clear();
    input.sendKeys(cityName.substring(0, 3));      // type a partial value to trigger the API call

    By suggestions = By.cssSelector("li.suggestion-item");
    wait.until(ExpectedConditions.numberOfElementsToBeMoreThan(suggestions, 0));  // wait for the async list

    // Iterate and click the exact match — don't blindly take the first suggestion
    for (WebElement s : driver.findElements(suggestions)) {
        if (s.getText().trim().equalsIgnoreCase(cityName)) {
            s.click();
            return;
        }
    }
    throw new NoSuchElementException("City not found in suggestions: " + cityName);  // fail with a clear message
}
```

**The project anchor**

> "All three exist in AutoConnect. The dealer portal is older, so its variant dropdown is a genuine `<select>` and I use the `Select` class. The customer configurator is React — its variant picker is a `div`-based custom component, so `Select` throws `UnexpectedTagNameException` and I use the click-then-click approach. And the dealer city search is an auto-suggest backed by an API, which needs the wait-for-suggestions pattern. That's why my first step is always to inspect the HTML rather than assume."

---

## Q46. How do you handle alerts? 🔴 **P0** `[L1]` ⏱ **60 sec**

**Say this — three types of JavaScript alert**

| Type | Looks like | Methods that apply |
|---|---|---|
| **Simple** | Message + OK | `accept()`, `getText()` |
| **Confirmation** | Message + OK/Cancel | `accept()`, `dismiss()`, `getText()` |
| **Prompt** | Message + text field + OK/Cancel | `accept()`, `dismiss()`, `sendKeys()`, `getText()` |

```java
// ALWAYS wait for the alert — it's created by JS and may not exist the instant you look
Alert alert = wait.until(ExpectedConditions.alertIsPresent());

String message = alert.getText();                  // read it BEFORE accepting — after accept() it's gone
Assert.assertEquals(message, "Cancel this booking?");

alert.accept();                                    // clicks OK
// alert.dismiss();                                // clicks Cancel
// alert.sendKeys("Change of plan");               // prompt only — typing into a simple alert throws
```

**Safe handling when an alert is optional**

```java
public boolean handleAlertIfPresent(boolean accept) {
    try {
        Alert a = new WebDriverWait(driver, Duration.ofSeconds(3))   // SHORT wait — it may legitimately not appear
                        .until(ExpectedConditions.alertIsPresent());
        System.out.println("Alert text: " + a.getText());            // log it for the report
        if (accept) a.accept(); else a.dismiss();
        return true;
    } catch (TimeoutException e) {
        return false;                                                // no alert — a valid outcome, not a failure
    }
}
```

**The distinction that earns marks — say this unprompted**

> "One important clarification: the `Alert` interface only handles **native JavaScript alerts**. It does not work on three other things people call 'popups':
>
> - **Modal dialogs built in HTML** — these are just `div` elements. You locate and click them like any other element; `switchTo().alert()` throws `NoAlertPresentException`.
> - **Browser-level dialogs** — location permission, notification permission, basic-auth prompts. These are *browser chrome*, not page content, so Selenium can't touch them. You handle them with `ChromeOptions` prefs (see **Q56**).
> - **New browser windows** — that's window handling, not alert handling (**Q48**).
>
> Knowing which of the four you're dealing with is most of the problem."

**Follow-up trap:** *"What if an unexpected alert appears mid-test?"*
> "Selenium throws `UnhandledAlertException`. You can set `UnexpectedAlertBehaviour` in the capabilities to accept or dismiss automatically — but I'd rather not, because it hides a real application event. I'd prefer the test to fail and tell me an unexpected alert appeared."

---

## Q47. How do you handle frames and iframes? 🔴 **P0** `[L1]` ⏱ **75 sec** — *appears 3×, including "multiple frames"*

**Say this — the core concept first**

> "A frame is a separate HTML document embedded in the page. Selenium's driver is scoped to **one document at a time**, so if an element is inside an iframe, `findElement` from the main page throws `NoSuchElementException` even though you can see the element on screen. You have to switch the driver's context first.
>
> **This is the single most common cause of a 'the element is clearly there but Selenium can't find it' bug.**"

```java
// ---------- Four ways to switch IN ----------
driver.switchTo().frame(0);                            // by index — 0-based, brittle, avoid
driver.switchTo().frame("payment-frame");              // by name or id attribute — readable
WebElement f = driver.findElement(By.cssSelector("iframe.payment"));
driver.switchTo().frame(f);                            // by WebElement — most reliable for dynamic frames

// Best practice: wait AND switch in one condition
wait.until(ExpectedConditions.frameToBeAvailableAndSwitchToIt(By.cssSelector("iframe.payment")));

// ---------- Now interact — locators resolve inside the frame ----------
driver.findElement(By.id("card-number")).sendKeys("4111111111111111");

// ---------- Switching OUT — this is where people go wrong ----------
driver.switchTo().defaultContent();     // jumps ALL the way back to the top-level document
driver.switchTo().parentFrame();        // moves up ONE level — essential for nested frames
```

### Nested frames — the "multiple frames" question

```java
// Main page → outer frame → inner frame
driver.switchTo().defaultContent();                      // always start from a known state
driver.switchTo().frame("outerFrame");                   // level 1
driver.switchTo().frame("innerFrame");                   // level 2 — RELATIVE to the current frame
driver.findElement(By.id("cvv")).sendKeys("123");

driver.switchTo().parentFrame();                         // back to outerFrame, NOT the main page
// driver.switchTo().defaultContent();                   // would jump all the way out
```

> **The critical point:** frame switching is **relative to the current context**. Once you're inside `outerFrame`, `switchTo().frame("innerFrame")` looks for it *within* that frame. Trying to switch to a sibling frame without returning to `defaultContent()` first is the classic mistake.

### Practical helpers

```java
// Count the frames on a page
int frameCount = driver.findElements(By.tagName("iframe")).size();

// Find which frame contains a given element — useful for debugging an unfamiliar page
public boolean switchToFrameContaining(By locator) {
    driver.switchTo().defaultContent();
    List<WebElement> frames = driver.findElements(By.tagName("iframe"));
    for (int i = 0; i < frames.size(); i++) {
        driver.switchTo().defaultContent();               // reset before each attempt
        driver.switchTo().frame(i);
        if (!driver.findElements(locator).isEmpty()) {     // findElements → no exception if absent
            System.out.println("Element found in frame index: " + i);
            return true;
        }
    }
    driver.switchTo().defaultContent();
    return false;
}
```

**Wrap it in a safe utility — what I actually do**

```java
// try-finally guarantees we return to the main document even if the interaction fails,
// otherwise every subsequent test step in this method runs in the wrong context
public void doInsideFrame(By frameLocator, Runnable action) {
    try {
        wait.until(ExpectedConditions.frameToBeAvailableAndSwitchToIt(frameLocator));
        action.run();
    } finally {
        driver.switchTo().defaultContent();
    }
}
```

**The project anchor**

> "Our payment step embeds the gateway's card form in an iframe — which is standard, since PCI compliance means the card fields must be on the gateway's domain, not ours. So every payment test switches into that frame. I wrapped it in the `doInsideFrame` helper above with a `finally`, because early on a failure inside the frame left the driver stuck there and every later step in that test failed with a confusing `NoSuchElementException`."

**Follow-up trap:** *"How does Playwright handle this?"*
> "Much more simply — `page.frameLocator('iframe.payment').getByLabel('Card number').fill(...)`. There's no context switching and no state to restore, so the whole class of stuck-in-a-frame bugs disappears. It's one of the concrete reasons we chose Playwright for the newer app."

---

## Q48. How do you handle multiple windows and tabs? 🔴 **P0** `[L1]` ⏱ **75 sec** — *appears 3×*

**Say this — the concept**

> "Each browser window or tab has a unique string **window handle**. The driver is focused on one at a time, so to interact with a new tab you switch to its handle. `getWindowHandle()` returns the current one; `getWindowHandles()` returns a `Set` of all of them."

```java
// ---------- Store the parent BEFORE opening anything new ----------
String parentHandle = driver.getWindowHandle();

driver.findElement(By.linkText("View Brochure")).click();   // opens a new tab

// Wait for the second window to actually exist — don't assume it's instant
wait.until(ExpectedConditions.numberOfWindowsToBe(2));

// ---------- Switch to the child ----------
for (String handle : driver.getWindowHandles()) {
    if (!handle.equals(parentHandle)) {
        driver.switchTo().window(handle);
        break;
    }
}

// ---------- Work in the child ----------
Assert.assertTrue(driver.getTitle().contains("Brochure"));

// ---------- Close it and return ----------
driver.close();                              // closes ONLY the current window
driver.switchTo().window(parentHandle);      // ⚠️ MUST switch back — after close() the driver has no focus
```

### Handling many windows — switch by title or URL

```java
public void switchToWindowByTitle(String expectedTitle) {
    String original = driver.getWindowHandle();
    for (String handle : driver.getWindowHandles()) {
        driver.switchTo().window(handle);
        if (driver.getTitle().contains(expectedTitle)) return;   // found it, stay here
    }
    driver.switchTo().window(original);                          // not found — restore original focus
    throw new NoSuchWindowException("No window with title: " + expectedTitle);
}
```

### Selenium 4 — open a new tab or window deliberately

```java
driver.switchTo().newWindow(WindowType.TAB);      // new TAB, and auto-switches focus to it
driver.get("https://qa.autoconnect.com/dealer");

driver.switchTo().newWindow(WindowType.WINDOW);   // new WINDOW instead
```

**`close()` vs `quit()` — they always ask this**

| | `close()` | `quit()` |
|---|---|---|
| Closes | Only the current window/tab | **All** windows |
| Ends the WebDriver session | ❌ No | ✅ Yes |
| Driver reusable after | Yes (must switch to a valid handle) | No — session is dead |
| Kills the driver process | No | Yes |

> "Using `close()` in teardown is a common leak: the browser window shuts but the driver process survives, so in CI you accumulate orphaned processes until the agent runs out of memory. **Teardown should always be `quit()`.**"

**The project anchor**

> "The brochure download and the dealer-locator map both open in new tabs, and our payment gateway opens the bank's 3D-secure page in a new window. So this pattern is in daily use. My rule is to always capture the parent handle first and always switch back explicitly — I've debugged too many failures caused by a test leaving the driver focused on a closed window."

---

## Q49. Actions class vs Select class 🟠 **P1** `[L1]` ⏱ **60 sec** — *from Image 1, Q4*

| | Actions class | Select class |
|---|---|---|
| **Purpose** | Complex user gestures — mouse and keyboard | Interacting with `<select>` dropdowns |
| **Package** | `org.openqa.selenium.interactions` | `org.openqa.selenium.support.ui` |
| **Works on** | Any element | **Only** a real `<select>` tag |
| **Mechanism** | Builds a chain of low-level input events | Wraps the HTML select API |
| **Needs `.perform()`** | ✅ Yes — nothing happens without it | ❌ No — methods act immediately |

**Say this**

> "They solve completely different problems and get compared only because both are 'helper classes.'
>
> **`Select`** is narrow and specific — it's a convenience wrapper for native HTML dropdowns, giving you `selectByVisibleText`, `getOptions` and so on. It throws `UnexpectedTagNameException` on anything that isn't a `<select>`.
>
> **`Actions`** is for gestures a plain `.click()` or `.sendKeys()` can't produce: hover, right-click, double-click, drag-and-drop, click-and-hold, and keyboard combinations. It uses a **builder pattern** — you chain the steps and then call `.perform()`, which is the mistake everyone makes once: forgetting `.perform()` means absolutely nothing happens and there's no error."

```java
Actions actions = new Actions(driver);

// ---- Hover: our configurator shows the accessory tooltip only on hover ----
actions.moveToElement(driver.findElement(By.cssSelector(".accessory-info"))).perform();

// ---- Right-click ----
actions.contextClick(element).perform();

// ---- Double-click ----
actions.doubleClick(element).perform();

// ---- Drag and drop ----
actions.dragAndDrop(source, target).perform();
// More reliable on HTML5 pages where dragAndDrop() often fails:
actions.clickAndHold(source).moveByOffset(10, 0).moveToElement(target).release().perform();

// ---- Keyboard combination: Ctrl+A then Ctrl+C ----
actions.keyDown(Keys.CONTROL).sendKeys("a").sendKeys("c").keyUp(Keys.CONTROL).perform();

// ---- Chained gesture: hover a menu, then click a submenu item ----
actions.moveToElement(mainMenu)
       .pause(Duration.ofMillis(500))        // let the submenu animation finish
       .moveToElement(subMenuItem)
       .click()
       .build()                              // build() is optional — perform() calls it implicitly
       .perform();
```

**The project anchor**

> "I use `Actions` for the accessory tooltips, which only render on hover, and for the 360-degree vehicle viewer, which needs click-and-hold plus `moveByOffset` to rotate. I use `Select` on the dealer portal's variant dropdown, which is a real `<select>`. On the customer configurator the variant picker is a custom `div`, so neither class applies — that's plain clicks."

---

## Q50. How do you handle calendars / date pickers? 🟠 **P1** `[L2]` ⏱ **75 sec** — *from Image 1, Q3*

**Say this — check for the easy path first, always**

> "My first step is always to check whether the date field accepts typed input, because if it does, the whole problem disappears:
>
> ```java
> WebElement dateField = driver.findElement(By.id("service-date"));
> dateField.sendKeys("15/08/2026");        // one line if the field isn't readonly
> ```
>
> Many teams write 40 lines of calendar-navigation code for a field that would have accepted `sendKeys`. If it's `readonly`, then I navigate the widget."

**Approach 2 — navigate the widget**

```java
public void selectServiceDate(String targetMonthYear, String targetDay) {
    driver.findElement(datePickerIcon).click();                   // open the calendar

    // Loop forward until the header matches the month we want
    while (true) {
        String currentHeader = wait.until(ExpectedConditions
                                 .visibilityOfElementLocated(calendarHeader)).getText().trim();
        if (currentHeader.equalsIgnoreCase(targetMonthYear)) break;   // arrived
        driver.findElement(nextMonthArrow).click();                   // step forward one month
        // ⚠️ Add a safety counter in real code so a wrong input can't loop forever
    }

    // Click the day. The :not() filter is essential — calendars render leading/trailing
    // days from adjacent months, and clicking one silently selects the wrong date.
    By day = By.xpath("//td[@class='day' and not(contains(@class,'other-month'))]"
                      + "[normalize-space()='" + targetDay + "']");
    wait.until(ExpectedConditions.elementToBeClickable(day)).click();
}
```

**Approach 3 — JavaScript, for a stubborn readonly field**

```java
// Removes the readonly attribute, then sets the value directly.
// Fast and reliable, BUT it bypasses the UI — so it does NOT test the calendar widget itself.
JavascriptExecutor js = (JavascriptExecutor) driver;
js.executeScript("arguments[0].removeAttribute('readonly')", dateField);
js.executeScript("arguments[0].value='15/08/2026'", dateField);
// Must fire the change event, or a React app won't register the new value in its state
js.executeScript("arguments[0].dispatchEvent(new Event('change', { bubbles: true }))", dateField);
```

**Handling relative dates properly — this is the part that impresses**

```java
// NEVER hardcode dates — the test will pass today and fail next month.
public String getDateAfterDays(int days, String pattern) {
    return LocalDate.now().plusDays(days)
                    .format(DateTimeFormatter.ofPattern(pattern));   // e.g. "dd/MM/yyyy"
}

// Service appointments must be a future date, so tests use relative dates
String tomorrow    = getDateAfterDays(1,  "dd/MM/yyyy");
String nextWeek    = getDateAfterDays(7,  "dd/MM/yyyy");
String yesterday   = getDateAfterDays(-1, "dd/MM/yyyy");   // for the negative test
```

**The project anchor and the test-design point**

> "This is the service-appointment scheduler in AutoConnect, and the interesting part isn't the automation — it's the test design. The calendar has real business rules: no past dates, no Sundays, dealer-specific holidays blocked, and a 90-day forward booking limit. So I test the boundaries — today, tomorrow, day 90, day 91 — plus a Sunday and a blocked holiday, using relative dates computed with `LocalDate` so the suite never goes stale."

---

## Q51. How do you fetch the attribute value of an element? 🟡 **P2** `[L1]` ⏱ **40 sec** — *from Image 1, Q6*

```java
WebElement el = driver.findElement(By.id("variant-select"));

// getAttribute — reads the HTML attribute, OR the live DOM property if they differ
String value       = el.getAttribute("value");        // current value of an input
String placeholder = el.getAttribute("placeholder");
String cssClass    = el.getAttribute("class");
String href        = el.getAttribute("href");
String custom      = el.getAttribute("data-colour");  // custom data-* attributes work the same way

// innerHTML / textContent via attribute
String inner = el.getAttribute("innerHTML");          // markup inside the element
String text  = el.getAttribute("textContent");        // ALL text, including hidden — differs from getText()

// Boolean attributes return the string "true" or null, not a boolean
boolean isDisabled = el.getAttribute("disabled") != null;
boolean isReadonly = Boolean.parseBoolean(el.getAttribute("readOnly"));

// CSS values need a different method entirely
String colour = el.getCssValue("background-color");   // → "rgba(255, 255, 255, 1)"
```

**The distinction they're testing** — say this, it's the real answer:

> "Two things worth being precise about.
>
> **`getAttribute()` vs `getText()`:** `getText()` returns only the **visible** rendered text of the element and its children — it returns empty for a hidden element. `getAttribute("textContent")` returns all text including hidden content. So for a validation message that's in the DOM but not yet displayed, `getText()` gives you nothing and `textContent` gives you the string.
>
> **Selenium 4.6+ split it into two methods:** `getDomAttribute()` reads the literal HTML attribute as written in the source, while `getDomProperty()` reads the live JavaScript property. They diverge on inputs — type into a field and the HTML `value` attribute stays unchanged while the DOM property updates. `getAttribute()` still works and tries both, but for a typed input value `getDomProperty("value")` is the precise choice."

**The project anchor**

> "I use it constantly for validation: reading `data-colour` on swatches to assert the right one is selected, checking `disabled` on the Proceed button to confirm it's blocked until a variant is chosen, and reading `href` on the brochure link to verify it points at the right PDF without actually downloading it."

---

## Q52. Write code to find broken links on a website 🟠 **P1** `[L2]` ⏱ **90 sec** — *appears 3× in your sources*

**Why they ask.** It's a favourite because it combines Selenium, collections, HTTP and exception handling in one problem. **Appears in your Round-2, L2 and Image lists — treat it as P0.**

```java
import org.openqa.selenium.*;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.*;

public class BrokenLinksTest extends BaseTest {

    @Test
    public void findBrokenLinks() {
        driver.get(ConfigReader.get().getProperty("baseUrl"));

        // 1. Collect every anchor on the page
        List<WebElement> links = driver.findElements(By.tagName("a"));
        System.out.println("Total anchors found: " + links.size());

        // 2. Extract hrefs, filtering out the ones we can't or shouldn't check.
        //    A Set removes duplicates — the same link often appears in header AND footer,
        //    and checking it twice doubles the runtime for no benefit.
        Set<String> urls = new LinkedHashSet<>();
        for (WebElement link : links) {
            String href = link.getAttribute("href");

            if (href == null || href.isEmpty()) continue;          // anchors with no href
            if (href.startsWith("javascript:")) continue;          // JS handlers, not navigable
            if (href.startsWith("mailto:") || href.startsWith("tel:")) continue;  // not HTTP
            if (href.startsWith("#")) continue;                    // in-page fragment
            urls.add(href);
        }
        System.out.println("Unique checkable URLs: " + urls.size());

        // 3. Send a HEAD request to each and inspect the status code
        List<String> broken = new ArrayList<>();

        for (String url : urls) {
            try {
                HttpURLConnection conn = (HttpURLConnection) new URL(url).openConnection();

                conn.setRequestMethod("HEAD");        // HEAD returns headers only, no body — far faster than GET
                conn.setConnectTimeout(5000);         // don't hang forever on a dead host
                conn.setReadTimeout(5000);
                conn.setInstanceFollowRedirects(true); // treat a 301 to a working page as valid

                conn.connect();
                int status = conn.getResponseCode();

                if (status >= 400) {                  // 4xx = client error, 5xx = server error
                    broken.add(status + " → " + url);
                    System.out.println("❌ BROKEN [" + status + "] " + url);
                } else {
                    System.out.println("✅ OK     [" + status + "] " + url);
                }
                conn.disconnect();                    // release the connection

            } catch (Exception e) {
                // Malformed URL, DNS failure, timeout — all count as broken
                broken.add("EXCEPTION → " + url + " (" + e.getClass().getSimpleName() + ")");
                System.out.println("❌ ERROR  " + url + " — " + e.getMessage());
            }
        }

        // 4. Assert once, at the end, with the full list — so one report shows every broken link
        Assert.assertTrue(broken.isEmpty(),
            "Found " + broken.size() + " broken links:\n" + String.join("\n", broken));
    }
}
```

**Say these three refinements out loud — they're what separate a good answer from a recited one**

1. **`HEAD` not `GET`** — we only need the status code, so downloading the body wastes bandwidth and time. *Caveat: some servers reject HEAD with 405, so a production version falls back to GET on 405.*
2. **Deduplicate with a Set** — header and footer links repeat across every page.
3. **Collect all failures, assert once** — asserting inside the loop stops at the first broken link, so you'd find them one build at a time.

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"400 links × 5 seconds — too slow. How do you speed it up?"* | "Parallelise the HTTP checks with a thread pool, since they're independent and I/O-bound: `ExecutorService pool = Executors.newFixedThreadPool(10)` and submit each URL as a task. Dropped ours from ~4 minutes to under 30 seconds." |
| *"Would you do this in Selenium at all?"* | "Honestly, no — and I'd say so. Selenium is only being used to *harvest* the hrefs; the actual checking is plain HTTP. A crawler like `linkchecker`, or a REST Assured / HttpClient script fed by a sitemap, does this better and faster. I'd keep it out of the UI regression suite and run it as a separate nightly job." |
| *"Is a 403 broken?"* | "Not necessarily. Some sites return 403 to non-browser user agents while working fine for real users. I maintain a small allowlist of known-good external domains rather than failing the build on a third-party site's bot protection." |

---

## Q53. Print the titles of multiple links / open each in a new tab 🟡 **P2** `[L2]` ⏱ **60 sec** — *from Round 2*

```java
@Test
public void printAllLinkTitles() {
    driver.get(baseUrl);

    // ---------- Part A: print the link TEXT of every anchor ----------
    List<WebElement> links = driver.findElements(By.tagName("a"));

    links.stream()
         .map(WebElement::getText)              // extract visible text from each element
         .map(String::trim)
         .filter(t -> !t.isEmpty())             // skip image-only / icon links with no text
         .distinct()                            // remove duplicates from header/footer repetition
         .forEach(System.out::println);

    // ---------- Part B: open each link and print the PAGE TITLE ----------
    // Collect hrefs FIRST — navigating away makes the WebElement references stale
    List<String> hrefs = links.stream()
            .map(el -> el.getAttribute("href"))
            .filter(Objects::nonNull)
            .filter(h -> h.startsWith("http"))
            .distinct()
            .collect(Collectors.toList());

    String parent = driver.getWindowHandle();

    for (String href : hrefs) {
        driver.switchTo().newWindow(WindowType.TAB);   // Selenium 4: new tab + auto-focus
        driver.get(href);
        System.out.println(href + "  →  " + driver.getTitle());
        driver.close();                                // close the tab
        driver.switchTo().window(parent);              // MUST return focus to the parent
    }
}
```

> **The trap:** collecting `WebElement` references and then navigating away throws `StaleElementReferenceException` on the next iteration, because the DOM those elements belonged to is gone. **Extract the hrefs as Strings first.** Say this out loud — it's the whole point of the question.

---

## Q54. get() vs navigate().to() 🟠 **P1** `[L2]` ⏱ **40 sec** — *from Round 2*

**Say this**

> "Functionally they're **identical** for loading a URL — `get()` internally delegates to `navigate().to()`. Both wait for the page load to complete.
>
> The real difference is that `navigate()` gives you the **browser history methods** that `get()` doesn't:
>
> ```java
> driver.get("https://qa.autoconnect.com");                  // load a page
> driver.navigate().to("https://qa.autoconnect.com/config"); // identical behaviour
>
> driver.navigate().back();      // browser Back button
> driver.navigate().forward();   // browser Forward button
> driver.navigate().refresh();   // F5
> ```
>
> Also `navigate().to()` accepts a `URL` object as well as a String, whereas `get()` only takes a String.
>
> In practice I use `get()` for the initial load because it reads more clearly, and `navigate()` when I need history. And `navigate().back()` is a genuinely useful test — on our configurator, going back must preserve the user's variant and colour selections, which is a real requirement and a real bug we found."

---

## Q55. How do you scroll the page? 🟡 **P2** `[L1]` ⏱ **45 sec**

```java
JavascriptExecutor js = (JavascriptExecutor) driver;   // WebDriver has no native scroll — cast to JS executor

// Scroll by a pixel amount
js.executeScript("window.scrollBy(0, 500)");           // down 500px; negative scrolls up

// Scroll to the bottom / top of the page
js.executeScript("window.scrollTo(0, document.body.scrollHeight)");
js.executeScript("window.scrollTo(0, 0)");

// Scroll a specific element into view — the most useful one
js.executeScript("arguments[0].scrollIntoView(true);", element);   // 'true' aligns to the top
js.executeScript("arguments[0].scrollIntoView({block:'center'});", element);  // centres it — better for sticky headers

// Selenium 4 native scroll via Actions
new Actions(driver).scrollToElement(element).perform();
new Actions(driver).scrollByAmount(0, 500).perform();

// Keyboard alternative
driver.findElement(By.tagName("body")).sendKeys(Keys.END);
```

**The infinite-scroll pattern — worth knowing**

```java
// Keep scrolling until the page height stops changing = all content loaded
long previousHeight = 0;
while (true) {
    long currentHeight = (long) js.executeScript("return document.body.scrollHeight");
    if (currentHeight == previousHeight) break;                    // nothing new loaded — done
    previousHeight = currentHeight;
    js.executeScript("window.scrollTo(0, document.body.scrollHeight)");
    wait.until(d -> (long) js.executeScript("return document.body.scrollHeight") > currentHeight
                    || true);                                       // brief settle for the lazy load
}
```

> **Say this:** *"Note that `scrollIntoView` with `{block:'center'}` is usually better than `true`, because a sticky header will cover a top-aligned element and the subsequent click hits the header instead. That's a real bug I debugged."*

---

## Q56. Automation scenario: open Amazon, search mobiles, scroll twice, get a generic XPath for the 7th listing 🟠 **P1** `[L2]` ⏱ **2 min** — *from your L1 list, Q7*

**Why they ask.** It's a **composite** question — navigation, search, scroll, and then the real test: can you write a *generic* index-based XPath? The phrase "works even in a new tab" means **don't rely on absolute paths or session-specific IDs**.

```java
@Test
public void findSeventhMobileListing() {

    // ---- 1. Open the site ----
    driver.get("https://www.amazon.in");

    // ---- 2. Search ----
    WebElement searchBox = wait.until(ExpectedConditions
            .elementToBeClickable(By.id("twotabsearchtextbox")));
    searchBox.sendKeys("mobiles");
    searchBox.sendKeys(Keys.ENTER);                    // ENTER avoids depending on the submit button's locator

    // ---- 3. Wait for results — never scroll before content exists ----
    By resultCard = By.cssSelector("div[data-component-type='s-search-result']");
    wait.until(ExpectedConditions.numberOfElementsToBeMoreThan(resultCard, 7));

    // ---- 4. Scroll twice ----
    JavascriptExecutor js = (JavascriptExecutor) driver;
    js.executeScript("window.scrollBy(0, window.innerHeight)");   // one viewport height, not a magic number
    wait.until(d -> true);                                        // brief settle for lazy-loaded images
    js.executeScript("window.scrollBy(0, window.innerHeight)");

    // ---- 5. The 7th listing — GENERIC XPath ----
    // Parenthesise the whole expression, THEN index. Without the brackets,
    // //div[...][7] means "a div that is the 7th child of its parent", which is wrong.
    String seventhXpath = "(//div[@data-component-type='s-search-result'])[7]";

    WebElement seventh = driver.findElement(By.xpath(seventhXpath));

    // ---- 6. Extract the details ----
    String title = seventh.findElement(By.xpath(".//h2//span")).getText();   // '.' scopes the search INSIDE the card
    System.out.println("7th listing: " + title);

    Assert.assertFalse(title.isEmpty(), "7th listing title should not be empty");
}
```

### The XPath discussion — this is what's actually being graded

**Say this:**

> "The key detail is the parentheses. `(//div[@data-component-type='s-search-result'])[7]` selects the 7th match across the whole document. Without the parentheses, `//div[@data-component-type='s-search-result'][7]` is parsed as 'a matching div that is the 7th such child of its parent' — a completely different and usually empty result. That's the trap in this question.
>
> On 'generic, works in a new tab': the XPath must not depend on anything session-specific. So:
>
> | ❌ Avoid | ✅ Use |
> |---|---|
> | `/html/body/div[3]/div[2]/div[7]` — absolute path, breaks on any layout change | `(//div[@data-component-type='...'])[7]` — attribute-driven |
> | Auto-generated IDs like `id='result_a8f3'` | Stable semantic attributes |
> | `class='s-result-item xyz-hash'` | `contains(@class,'s-result-item')` |
>
> And I'd add a caveat I'd want on record: **index-based locators are inherently fragile for real tests.** Amazon injects sponsored results, so 'the 7th card' isn't a stable business concept. For an actual test I'd locate by product name or filter the collected list, and use `findElements()` with an index only when the requirement genuinely is positional — like verifying that exactly 20 results render per page."

**Follow-up trap:** *"Get the 7th using `findElements` instead."*
```java
List<WebElement> cards = driver.findElements(resultCard);
Assert.assertTrue(cards.size() >= 7, "Fewer than 7 results returned");   // guard BEFORE indexing
WebElement seventh = cards.get(6);        // 0-based: index 6 is the 7th element
```
> "Note the index difference — XPath is 1-based (`[7]`), Java lists are 0-based (`get(6)`). Mixing these up is the most common off-by-one in Selenium code."

---

## Q57. Validate all mobile numbers on a page and count valid/invalid 🟠 **P1** `[L2]` ⏱ **90 sec** — *from your L1 list, Q8*

**Ask first:** *"Which format is valid — Indian 10-digit starting 6–9? Should I allow a +91 prefix, spaces or hyphens?"* Asking this is graded.

```java
@Test
public void validateMobileNumbersOnPage() {
    driver.get(baseUrl + "/dealer-locator");

    // 1. Collect the elements holding phone numbers
    List<WebElement> phoneElements = driver.findElements(By.cssSelector("span.dealer-phone"));

    // 2. Indian mobile: optional +91/0 prefix, then 6-9 followed by 9 digits
    //    ^        start of string (anchors prevent partial matches)
    //    (\+91|0)? optional country code or leading zero
    //    [6-9]    Indian mobiles start with 6,7,8 or 9
    //    \d{9}    exactly nine more digits
    //    $        end of string
    String regex = "^(\\+91|0)?[6-9]\\d{9}$";
    Pattern pattern = Pattern.compile(regex);       // compile ONCE outside the loop, not per iteration

    List<String> valid   = new ArrayList<>();
    List<String> invalid = new ArrayList<>();

    for (WebElement el : phoneElements) {
        String raw = el.getText().trim();

        // Normalise before validating: strip spaces, hyphens, brackets and dots
        String cleaned = raw.replaceAll("[\\s\\-()\\.]", "");

        if (pattern.matcher(cleaned).matches()) {   // matches() = whole string; find() = substring
            valid.add(raw);
        } else {
            invalid.add(raw);
        }
    }

    System.out.println("Total   : " + phoneElements.size());
    System.out.println("Valid   : " + valid.size());
    System.out.println("Invalid : " + invalid.size() + " → " + invalid);

    Assert.assertTrue(invalid.isEmpty(),
        "Invalid mobile numbers found on page: " + invalid);
}
```

**Streams version — offer this as the concise alternative**

```java
Map<Boolean, List<String>> partitioned = driver.findElements(By.cssSelector("span.dealer-phone"))
        .stream()
        .map(WebElement::getText)
        .map(String::trim)
        .map(s -> s.replaceAll("[\\s\\-()]", ""))
        .collect(Collectors.partitioningBy(s -> s.matches("^(\\+91|0)?[6-9]\\d{9}$")));
        // partitioningBy always returns BOTH keys: true → valid list, false → invalid list

System.out.println("Valid  : " + partitioned.get(true).size());
System.out.println("Invalid: " + partitioned.get(false).size());
```

**Say this to close — the tester's addition**

> "One thing I'd flag: this validates *format*, not *correctness*. A well-formed number can still be the wrong dealer's number. So in my project I cross-check the UI numbers against the dealer API response rather than only regex-validating them. Regex catches data-entry corruption; the API comparison catches wrong data."

> **Common regexes worth memorising:**
> - Email: `^[\\w.+-]+@[\\w-]+\\.[\\w.]{2,}$`
> - Indian PIN code: `^[1-9][0-9]{5}$`
> - Vehicle registration: `^[A-Z]{2}[0-9]{2}[A-Z]{1,2}[0-9]{4}$`
> - PAN: `^[A-Z]{5}[0-9]{4}[A-Z]$`

---

## Q58. How do you handle browser location / notification popups? 🟠 **P1** `[L2]` ⏱ **60 sec** — *from Round 2*

**Why they ask.** It's a good question because the naive answer is wrong. **These are not JavaScript alerts** — `switchTo().alert()` will not work.

**Say this**

> "Location, camera and notification prompts are **browser-level UI**, not page content, so Selenium can't interact with them at all. The correct approach is to configure the browser so the prompt never appears. You do it at driver-creation time with `ChromeOptions`."

```java
public static WebDriver createChromeWithPermissions() {
    ChromeOptions options = new ChromeOptions();

    // Approach 1: BLOCK the prompts entirely via content-settings preferences
    Map<String, Object> prefs = new HashMap<>();
    prefs.put("profile.default_content_setting_values.notifications", 2);      // 1 = allow, 2 = block
    prefs.put("profile.default_content_setting_values.geolocation", 2);
    prefs.put("profile.default_content_setting_values.media_stream_camera", 2);
    prefs.put("profile.default_content_setting_values.media_stream_mic", 2);
    options.setExperimentalOption("prefs", prefs);

    // Approach 2: command-line flags
    options.addArguments("--disable-notifications");
    options.addArguments("--disable-geolocation");
    options.addArguments("--disable-infobars");                 // hides "Chrome is being controlled..."

    return new ChromeDriver(options);
}
```

**When you need to ALLOW and fake the location — this is the better answer for our project**

```java
// Our dealer locator needs a location to show nearby dealers, so blocking it isn't an option.
// Selenium 4 gives native CDP access to override geolocation with fixed coordinates.
ChromeDriver chrome = (ChromeDriver) driver;

Map<String, Object> coordinates = new HashMap<>();
coordinates.put("latitude", 12.9716);      // Bengaluru
coordinates.put("longitude", 77.5946);
coordinates.put("accuracy", 100);

chrome.executeCdpCommand("Emulation.setGeolocationOverride", coordinates);
// Now the browser reports these coordinates without ever prompting the user.
```

**The project anchor**

> "The dealer locator is exactly this case. We can't just block the prompt, because the feature depends on location. So we override the coordinates via CDP — which is actually better than allowing the real prompt, because it makes the test **deterministic**: the same coordinates every run means the same expected list of nearby dealers. Before that, our CI agents in a different region returned different dealers and the assertions failed randomly."

**Follow-up trap:** *"What about a basic-auth popup?"*
> "Also browser-level. The simplest handling is embedding credentials in the URL — `https://user:pass@site.com` — though Chrome has restricted this. The cleaner modern approach is setting the `Authorization` header via CDP with `Network.setExtraHTTPHeaders`, or intercepting the request in Playwright with `httpCredentials` in the context options."

---

## Q59. StaleElementReferenceException — cause and fix 🟠 **P1** `[L2]` ⏱ **60 sec**

**Say this**

> "It means you're holding a `WebElement` reference to an element that's no longer attached to the DOM. The element you see on screen may look identical, but the DOM node was destroyed and recreated — so your reference points at nothing.
>
> Three common triggers: the page navigated or refreshed; an AJAX call re-rendered a section; or a React/Angular component re-rendered after a state change. Our configurator triggers it constantly, because every colour selection re-renders the price panel."

**Five fixes, in order of preference**

```java
// 1. BEST: don't cache elements. Locate at the moment of use.
// ❌ Bad — the reference goes stale between lines
WebElement price = driver.findElement(priceLabel);
selectColour("Red");                        // price panel re-renders here
price.getText();                            // 💥 StaleElementReferenceException

// ✅ Good — re-locate after the action
selectColour("Red");
driver.findElement(priceLabel).getText();   // fresh reference


// 2. Wait for the CONDITION, which re-locates on each poll
wait.until(ExpectedConditions.textToBePresentInElementLocated(priceLabel, "₹"));


// 3. Explicitly ignore it in a FluentWait
Wait<WebDriver> w = new FluentWait<>(driver)
        .withTimeout(Duration.ofSeconds(20))
        .pollingEvery(Duration.ofMillis(500))
        .ignoring(StaleElementReferenceException.class);   // keep retrying through re-renders


// 4. Retry wrapper in BasePage — what I actually use
protected void clickWithRetry(By locator) {
    int attempts = 0;
    while (attempts < 3) {                                 // bounded retry, never infinite
        try {
            wait.until(ExpectedConditions.elementToBeClickable(locator)).click();
            return;                                        // success — exit
        } catch (StaleElementReferenceException e) {
            attempts++;                                    // DOM re-rendered; loop re-locates it
        }
    }
    throw new FrameworkException("Element still stale after 3 attempts: " + locator);
}


// 5. Wait for the re-render to FINISH before touching anything
wait.until(ExpectedConditions.invisibilityOfElementLocated(By.className("price-loader")));
```

**The framework-design point — say this, it's the strong answer**

> "This is a large part of why I prefer plain `By` locators over PageFactory's `@FindBy`. With `@FindBy`, the field holds a lazily-initialised proxy that caches its element after first use — so on an SPA it goes stale constantly. With `By`, the element is located fresh every time the helper method runs, so the problem largely doesn't arise.
>
> And it's one of the concrete reasons Playwright suited our React app better: Playwright locators are **lazy by design** — a locator is a description that's resolved at action time, not a reference to a DOM node. There is no stale-element exception in Playwright, because there's nothing to go stale."

---

## Q60. How do you take screenshots, especially for failed tests? 🔴 **P0** `[L1] [L2]` ⏱ **75 sec** — *from Round 1*

**Basic screenshot**

```java
// TakesScreenshot is a separate interface — WebDriver must be cast to it
File src = ((TakesScreenshot) driver).getScreenshotAs(OutputType.FILE);
FileUtils.copyFile(src, new File("reports/screenshots/failure.png"));   // Apache Commons IO

// Base64 — what you want for embedding in an HTML report (no file path dependency)
String base64 = ((TakesScreenshot) driver).getScreenshotAs(OutputType.BASE64);

// Element-only screenshot (Selenium 4) — great for asserting one component
File elementShot = driver.findElement(By.id("price-panel")).getScreenshotAs(OutputType.FILE);

// Full-page screenshot beyond the viewport (Firefox native; Chrome needs CDP)
File full = ((FirefoxDriver) driver).getFullPageScreenshotAs(OutputType.FILE);
```

**ScreenshotUtil**

```java
public class ScreenshotUtil {

    public static String capture(WebDriver driver, String testName) {
        // Timestamp the filename so a retried test doesn't overwrite the first failure's evidence
        String timestamp = LocalDateTime.now().format(DateTimeFormatter.ofPattern("ddMMyy_HHmmss"));
        String fileName = testName + "_" + timestamp + ".png";
        String path = FrameworkConstants.SCREENSHOT_DIR + fileName;

        try {
            File src = ((TakesScreenshot) driver).getScreenshotAs(OutputType.FILE);
            FileUtils.copyFile(src, new File(path));
        } catch (IOException e) {
            System.err.println("Screenshot failed: " + e.getMessage());   // never let this fail the test itself
        }
        return path;
    }

    /** Base64 for embedding directly into the Extent report — no broken image links when the report moves. */
    public static String captureAsBase64(WebDriver driver) {
        return ((TakesScreenshot) driver).getScreenshotAs(OutputType.BASE64);
    }
}
```

**The automatic version — TestNG ITestListener (this is the real answer)**

```java
public class TestListener implements ITestListener {

    @Override
    public void onTestFailure(ITestResult result) {
        // TestNG calls this automatically the moment any @Test fails — zero code in the test itself
        WebDriver driver = DriverFactory.getDriver();

        if (driver != null) {                         // guard: setup may have failed before the driver existed
            String base64 = ScreenshotUtil.captureAsBase64(driver);

            ExtentReportManager.getTest()
                .fail(result.getThrowable())          // the actual exception and stack trace
                .addScreenCaptureFromBase64String(base64, "Failure screenshot");

            // Also log the URL — knowing WHERE it failed is often more useful than the picture
            ExtentReportManager.getTest().info("Failed at URL: " + driver.getCurrentUrl());
        }
    }

    @Override
    public void onTestSuccess(ITestResult result) {
        ExtentReportManager.getTest().pass("Test passed");
    }

    @Override
    public void onTestSkipped(ITestResult result) {
        ExtentReportManager.getTest().skip("Skipped: " + result.getThrowable());
    }
}
```

**Registering the listener — three ways**

```xml
<!-- Option 1: testng.xml — suite-wide -->
<suite name="Regression">
    <listeners>
        <listener class-name="com.autoconnect.listeners.TestListener"/>
    </listeners>
    ...
</suite>
```

```java
// Option 2: annotation on the base class — inherited by every test
@Listeners(com.autoconnect.listeners.TestListener.class)
public class BaseTest { ... }
```

> **Option 3 (best for a framework):** implement `IAnnotationTransformer`/ServiceLoader via `META-INF/services` so the listener is picked up automatically with no configuration at all.

**Say this — the design point**

> "The important part isn't the screenshot code, it's that **no test method contains any screenshot logic**. It's entirely in the listener, so it can't be forgotten and it's consistent across 400 tests. I embed as Base64 rather than linking files, because a report emailed or archived by Jenkins then still shows the images — file paths break the moment the report moves."

**Follow-up trap:** *"A screenshot doesn't always explain the failure. What else do you capture?"*
> "Right — a screenshot of a spinner tells you nothing. So on failure I also log the current URL, the browser console logs via `driver.manage().logs().get(LogType.BROWSER)`, and the test data that was used. For the Playwright suite this is solved much better by **Trace Viewer**, which captures a DOM snapshot at every step plus network activity — that turned overnight-failure triage from twenty minutes into two."

---

## Q61. How do you handle file upload and download? 🟡 **P2** `[L1]` ⏱ **60 sec**

**Upload**

```java
// ---- Case 1: a real <input type="file"> — the easy and correct way ----
// sendKeys the absolute path directly to the input. DO NOT click it —
// clicking opens the OS file dialog, which Selenium cannot control at all.
WebElement fileInput = driver.findElement(By.id("rc-upload"));
fileInput.sendKeys(new File("src/test/resources/testdata/rc_book.pdf").getAbsolutePath());

// If the input is hidden by a styled label (very common), reveal it first
js.executeScript("arguments[0].style.display='block'; arguments[0].style.visibility='visible';", fileInput);
fileInput.sendKeys(absolutePath);
```

> **Say this:** *"Use `getAbsolutePath()`, never a hardcoded `C:\Users\...` path — that breaks the moment the test runs on a Linux CI agent. This is a real portability bug I've fixed."*

```java
// ---- Case 2: a custom drag-and-drop widget with NO file input → Robot class (last resort) ----
StringSelection path = new StringSelection("/abs/path/rc_book.pdf");
Toolkit.getDefaultToolkit().getSystemClipboard().setContents(path, null);
Robot robot = new Robot();
robot.keyPress(KeyEvent.VK_CONTROL); robot.keyPress(KeyEvent.VK_V);   // paste the path
robot.keyRelease(KeyEvent.VK_V); robot.keyRelease(KeyEvent.VK_CONTROL);
robot.keyPress(KeyEvent.VK_ENTER); robot.keyRelease(KeyEvent.VK_ENTER);
// ⚠️ Robot controls the real OS keyboard — fails in headless mode and breaks on parallel runs.
// I avoid it and ask devs for a real file input, or test the upload API directly instead.
```

**Download**

```java
// Configure a known download directory so the test can verify the file
ChromeOptions options = new ChromeOptions();
Map<String, Object> prefs = new HashMap<>();
prefs.put("download.default_directory", System.getProperty("user.dir") + "/target/downloads");
prefs.put("download.prompt_for_download", false);      // don't show the Save-As dialog
prefs.put("plugins.always_open_pdf_externally", true); // download PDFs instead of opening in-browser
options.setExperimentalOption("prefs", prefs);

// After clicking download, poll for the file rather than sleeping
public boolean waitForDownload(String fileName, int timeoutSeconds) {
    File file = new File(System.getProperty("user.dir") + "/target/downloads/" + fileName);
    return new FluentWait<>(file)
            .withTimeout(Duration.ofSeconds(timeoutSeconds))
            .pollingEvery(Duration.ofMillis(500))
            .until(f -> f.exists() && f.length() > 0);   // exists AND non-empty (guards against a partial file)
}
```

> **The better answer:** *"For the brochure download I don't actually download the file in the UI test. I read the `href`, then send a HEAD request with REST Assured and assert the status is 200 and the content-type is `application/pdf`. That verifies the same requirement in milliseconds with no filesystem dependency and no CI flakiness."*

---

## Q62. What's new in Selenium 4? 🟡 **P2** `[L1] [L2]` ⏱ **60 sec**

**Say this — six things**

1. **W3C WebDriver standard compliance** — Selenium 3 translated commands from JSON Wire Protocol to W3C; Selenium 4 speaks W3C natively, so there's no translation layer and cross-browser behaviour is more consistent.
2. **Relative locators** — `with(By.tagName("input")).below(By.id("model"))`, plus `above`, `toLeftOf`, `toRightOf`, `near`.
3. **Native CDP access** — `executeCdpCommand()` for network throttling, geolocation override, console log capture, request interception. This is what powers the geolocation trick in **Q58**.
4. **`newWindow()`** — open a tab or window natively instead of via JavaScript.
5. **Selenium Manager** — automatic driver binary resolution, so `WebDriverManager` and manual chromedriver downloads are no longer needed (Selenium 4.6+). **A very common practical question.**
6. **Better Grid** — fully redesigned with Docker support, an observability layer, and standalone/hub-node/fully-distributed modes.

**Also worth naming:** deprecated `DesiredCapabilities` in favour of browser-specific `Options` classes; `Duration` instead of `long` + `TimeUnit` in all timeout methods.

**Follow-up trap:** *"Do you still use WebDriverManager?"*
> "Not on new code. Selenium Manager, built into Selenium 4.6+, resolves the driver binary automatically — so `new ChromeDriver()` just works with no setup. Our older suite still has `WebDriverManager.chromedriver().setup()` in it, which is now redundant. I'd remove it, but it's harmless and removing it isn't a priority."


---
---

# Part 6 — TestNG · Maven · CI/CD

> These questions come almost entirely from your **L1/L2 Infosys list** — `testng.xml`, Maven commands, `pom.xml`, Surefire, failed-test handling, reports, scheduling. They're all "prove you actually ran a suite" questions.

---

## Q63. Explain the testng.xml file 🔴 **P0** `[L1]` ⏱ **75 sec** — *from your L1 list, Q15*

**Say this**

> "`testng.xml` is the suite configuration file. It's what lets me control *what* runs, in *what order*, with *what parameters* and at *what parallelism* — all without touching Java code. That's the point: the same compiled test code can be run as a 10-minute smoke pack or a 3-hour regression by pointing Maven at a different XML."

```xml
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE suite SYSTEM "https://testng.org/testng-1.0.dtd">

<!-- parallel="methods": each @Test method runs on its own thread
     thread-count: how many concurrently. Must match the ThreadLocal driver design. -->
<suite name="AutoConnect Regression" parallel="methods" thread-count="4" verbose="1">

    <!-- Suite-level parameter: available to every test via @Parameters -->
    <parameter name="browser" value="chrome"/>
    <parameter name="env"     value="qa"/>

    <!-- Listeners registered here apply to the whole suite -->
    <listeners>
        <listener class-name="com.autoconnect.listeners.TestListener"/>
        <listener class-name="com.autoconnect.listeners.RetryListener"/>
    </listeners>

    <!-- <test> = a logical grouping. Can override suite parameters. -->
    <test name="Configurator Module">
        <parameter name="browser" value="chrome"/>   <!-- overrides the suite value -->

        <!-- Run only these groups, and explicitly exclude the broken ones -->
        <groups>
            <run>
                <include name="smoke"/>
                <include name="regression"/>
                <exclude name="knownIssue"/>          <!-- keeps failing tests out without deleting them -->
            </run>
        </groups>

        <classes>
            <class name="com.autoconnect.tests.ui.ConfiguratorTest"/>
            <class name="com.autoconnect.tests.ui.PricingTest">
                <methods>
                    <include name="verifyOnRoadPrice"/>   <!-- method-level selection -->
                    <exclude name="verifyLegacyOffer"/>
                </methods>
            </class>
        </classes>
    </test>

    <!-- A second <test> block: different browser, so this is how cross-browser runs are configured -->
    <test name="Configurator Module - Firefox">
        <parameter name="browser" value="firefox"/>
        <packages>
            <package name="com.autoconnect.tests.ui.*"/>   <!-- whole package instead of listing classes -->
        </packages>
    </test>

</suite>
```

**Hierarchy — they often ask this**

```
<suite>                     ← @BeforeSuite / @AfterSuite run once here
  └── <test>                ← @BeforeTest / @AfterTest
        └── <classes>        ← @BeforeClass / @AfterClass
              └── <methods>  ← @BeforeMethod / @AfterMethod (per test method)
```

**The project anchor**

> "I maintain three suite files: `smoke.xml` with ~40 critical-path tests that run on every merge and finish in about 10 minutes; `sanity.xml` for the module under change; and `regression.xml` with the full ~420 tests, running nightly on 4 threads. Jenkins picks which one with `-Dsuite=smoke`."

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"`parallel="methods"` vs `"classes"` vs `"tests"`?"* | "`methods` — every `@Test` method on its own thread, maximum parallelism, requires fully independent tests. `classes` — each class on one thread, so methods within a class stay sequential (useful when a class has ordered steps). `tests` — each `<test>` block on a thread, which is the natural fit for cross-browser runs. We use `methods`." |
| *"Can you run testng.xml without Maven?"* | "Yes — from the IDE by right-clicking the file, or via the command line `java -cp ... org.testng.TestNG testng.xml`. But in CI we always go through Maven so dependency resolution and the build lifecycle are handled." |

---

## Q64. TestNG annotations and their execution order 🔴 **P0** `[L1]` ⏱ **60 sec**

**Execution order — memorise this sequence**

```
@BeforeSuite            ← once per suite
  @BeforeTest           ← once per <test> tag
    @BeforeClass        ← once per class
      @BeforeMethod     ← before EVERY @Test method
        @Test           ← the test
      @AfterMethod      ← after EVERY @Test method
    @AfterClass
  @AfterTest
@AfterSuite
```

**What each is for in my framework**

| Annotation | My use |
|---|---|
| `@BeforeSuite` | Initialise Extent Reports, load config, clean the old screenshots folder |
| `@BeforeTest` | Rarely used — occasionally to set a browser-level flag |
| `@BeforeClass` | Log in once for a class of tests that all need an authenticated session |
| `@BeforeMethod` | **Create the WebDriver and navigate** — fresh browser per test = full isolation |
| `@Test` | The test itself |
| `@AfterMethod` | `driver.quit()` — always with `alwaysRun = true` |
| `@AfterClass` | Log out, clear class-level state |
| `@AfterSuite` | Flush the Extent report, archive artefacts |

**Key attributes**

```java
@Test(priority = 1,                        // lower number runs first; default is 0
      groups = {"smoke", "regression"},    // for group-based selection in testng.xml
      dependsOnMethods = "testLogin",      // SKIPPED (not failed) if the dependency fails
      enabled = false,                     // temporarily disable without deleting
      description = "Verify on-road price updates on accessory selection",
      timeOut = 60000,                     // fail if it exceeds 60s — catches hangs
      invocationCount = 3,                 // run 3 times (useful for flakiness hunting)
      expectedExceptions = NoSuchElementException.class,   // pass only if this is thrown
      retryAnalyzer = RetryAnalyzer.class)
public void verifyPriceUpdate() { ... }
```

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"Why `alwaysRun = true` on `@AfterMethod`?"* | "Without it, if `@BeforeMethod` fails the `@AfterMethod` is skipped — so `driver.quit()` never runs and you leak a browser process. In CI that accumulates until the agent runs out of memory. It's a small flag that prevents a real problem." |
| *"`priority` vs `dependsOnMethods`?"* | "`priority` only orders execution — it doesn't create a dependency, so test 2 still runs if test 1 fails. `dependsOnMethods` creates a real dependency: if the parent fails, the child is **skipped**, not failed. I use `dependsOnMethods` sparingly, because chained tests make failures hard to read. Ideally every test is independent." |
| *"TestNG vs JUnit?"* | "TestNG has built-in data providers, groups, native parallel execution, dependency management and flexible suite XML configuration. JUnit 5 has closed much of the gap with `@ParameterizedTest` and tags, but TestNG's suite-level XML control and `@DataProvider` are still better suited to a large regression framework." |

---

## Q65. DataProvider vs Parameters 🔴 **P0** `[L1] [L2]` ⏱ **60 sec**

| | `@DataProvider` | `@Parameters` |
|---|---|---|
| **Source of data** | A Java method (Excel, JSON, DB, hardcoded) | `testng.xml` |
| **Data volume** | Many rows — test runs once per row | One set of values |
| **Type** | Any object type | Strings only (TestNG converts primitives) |
| **Runtime data** | ✅ Can be computed/fetched at runtime | ❌ Static in the XML |
| **Best for** | **Data-driven testing** | Environment config — browser, URL, env |

```java
// ---------- @DataProvider: the test runs once per returned row ----------
@DataProvider(name = "loginData", parallel = true)   // parallel=true runs the rows concurrently
public Object[][] loginData() {
    return new Object[][] {
        {"valid_dealer",   "Valid@123",  true,  ""},
        {"valid_dealer",   "WrongPass",  false, "Invalid credentials"},
        {"locked_dealer",  "Valid@123",  false, "Account locked"},
        {"",               "Valid@123",  false, "Username is required"}
    };
}

@Test(dataProvider = "loginData")
public void verifyLogin(String user, String pass, boolean shouldSucceed, String expectedError) {
    // TestNG injects one row per execution → this single method produces 4 test results
    ...
}
```

```java
// ---------- @Parameters: values come from testng.xml ----------
@BeforeMethod
@Parameters({"browser", "env"})
public void setUp(@Optional("chrome") String browser,      // @Optional = fallback when run outside testng.xml
                  @Optional("qa") String env) {
    DriverFactory.initDriver(browser);
}
```

**Say this — the deciding rule**

> "`@Parameters` is for *configuration* — one browser, one environment. `@DataProvider` is for *test data* — many combinations of the same flow. I use both together: `@Parameters` decides which browser, `@DataProvider` supplies the 80 pricing combinations from Excel.
>
> A useful detail: a DataProvider can take an `ITestContext` or `Method` argument, so it can return different data depending on which test is calling it — that's how one provider can serve several tests from different sheets."

---

## Q66. How do you handle / re-run failed test cases in TestNG? 🔴 **P0** `[L1] [L2]` ⏱ **90 sec** — *from Round 1, twice*

**Say this — there are two mechanisms, and they solve different problems**

### Mechanism 1 — `testng-failed.xml` (manual, after the run)

> "After any run, TestNG auto-generates `test-output/testng-failed.xml` containing only the tests that failed. Running that file re-executes just those. Useful for local debugging after a big regression run — but it's a manual step, and it also pulls in any `dependsOnMethods` parents."

### Mechanism 2 — `IRetryAnalyzer` (automatic, during the run) — **the real answer**

```java
public class RetryAnalyzer implements IRetryAnalyzer {

    private int retryCount = 0;
    private static final int MAX_RETRY = 2;    // 2 retries = up to 3 total attempts

    @Override
    public boolean retry(ITestResult result) {
        // TestNG calls this whenever a test fails.
        // Returning true → run it again. Returning false → accept the failure.
        if (retryCount < MAX_RETRY) {
            retryCount++;
            System.out.println("Retrying '" + result.getName() + "' — attempt " + (retryCount + 1));
            return true;
        }
        return false;
    }
}
```

**Applying it to every test automatically — the part that shows framework skill**

```java
// Attaching retryAnalyzer to each @Test by hand doesn't scale to 400 tests.
// IAnnotationTransformer injects it into every @Test at runtime.
public class RetryListener implements IAnnotationTransformer {

    @Override
    public void transform(ITestAnnotation annotation, Class testClass,
                          Constructor testConstructor, Method testMethod) {
        annotation.setRetryAnalyzer(RetryAnalyzer.class);   // applied to every @Test, no per-test code
    }
}
```

```xml
<listeners>
    <listener class-name="com.autoconnect.listeners.RetryListener"/>
</listeners>
```

**Now say the thing that makes this answer strong**

> "But I want to be clear about how retries should be used, because blanket retrying is dangerous. **A retry that hides a real intermittent product bug is worse than a red test.** So we apply three rules:
>
> 1. **Retry only once**, not five times. If it needs three attempts, it's broken.
> 2. **Every retry is logged and visible in the report** as 'passed on retry', never silently green. I track the retry rate as a metric.
> 3. **A test that retries repeatedly gets investigated, not accepted.** Two of our 'flaky' tests turned out to be a genuine race condition in the pricing service — a real defect the retry was masking.
>
> We only allow retries for tests dependent on a third-party sandbox — the payment gateway test environment genuinely does time out intermittently, and that's infrastructure, not our product."

**Follow-up trap:** *"How do you handle failed test *data* rather than failed tests?"* (this is the literal wording on your list)
> "Two things. First, `SoftAssert` — so one bad data row reports all its failures instead of stopping at the first assertion, which means one run tells me everything wrong with that row. Second, data isolation: each data row must be independent, so I generate unique identifiers per row rather than sharing a fixture. And I log the failing data row into the report explicitly — knowing that 'Vitara + VX + Maharashtra' failed while other states passed immediately narrows it to a state-specific tax rule."

---

## Q67. Assert vs SoftAssert 🟠 **P1** `[L1]` ⏱ **45 sec**

| | Hard Assert (`Assert`) | Soft Assert (`SoftAssert`) |
|---|---|---|
| **On failure** | Throws immediately, test **stops** | Records it, test **continues** |
| **Reports** | The first failure only | All failures at once |
| **Needs a final call** | No | ✅ **`assertAll()` — mandatory** |
| **Use for** | Preconditions, blocking checks | Multiple independent field validations |

```java
// ---------- Hard assert: correct when continuing is pointless ----------
Assert.assertTrue(configPage.isLoaded(), "Configurator page did not load");
// If the page didn't load, every subsequent check is meaningless — stop here.

// ---------- Soft assert: correct when validating many independent fields ----------
@Test
public void verifyPriceBreakupFields() {
    SoftAssert soft = new SoftAssert();

    soft.assertEquals(page.getExShowroom(), 1045000.0, "Ex-showroom mismatch");
    soft.assertEquals(page.getRoadTax(),     125400.0, "Road tax mismatch");
    soft.assertEquals(page.getInsurance(),    38500.0, "Insurance mismatch");
    soft.assertEquals(page.getOnRoad(),     1208900.0, "On-road total mismatch");

    soft.assertAll();   // ⚠️ WITHOUT THIS the test PASSES even with failures — the classic trap
}
```

**Say this**

> "The critical gotcha is that forgetting `assertAll()` makes the test pass silently regardless of how many soft assertions failed. It's a false-green test, which is the worst possible outcome — you'd rather have no test than a lying one.
>
> My rule: **hard assert for preconditions, soft assert for field-level validations.** In the price-breakup example, if road tax is wrong I still want to know whether insurance is also wrong — that distinguishes a single wrong constant from a broken calculation. But if the page never loaded, I hard-assert and stop, because continuing produces four meaningless failures that obscure the real cause."

---

## Q68. Why did you use Maven? Explain pom.xml 🔴 **P0** `[L1] [L2]` ⏱ **90 sec** — *both on your L2 list*

**Why Maven — four reasons**

> "1. **Dependency management** — I declare Selenium, TestNG and REST Assured in one file and Maven downloads them and their transitive dependencies. Before build tools, you manually downloaded JARs and committed them to the repo.
>
> 2. **Standard project structure** — `src/main/java`, `src/test/java`, `src/test/resources`. Any Java developer can navigate my framework immediately because the convention is universal.
>
> 3. **Build lifecycle** — one command compiles, tests and packages. That's what makes CI integration trivial: Jenkins just runs `mvn clean test`.
>
> 4. **Reproducible builds** — versions are pinned, so my machine, my teammate's machine and the CI agent all resolve exactly the same dependency tree. 'Works on my machine' stops being a category of bug."

**pom.xml — POM = Project Object Model**

```xml
<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="http://maven.apache.org/POM/4.0.0" ...>

    <modelVersion>4.0.0</modelVersion>

    <!-- GAV coordinates: the unique identity of this artifact -->
    <groupId>com.autoconnect</groupId>          <!-- organisation / package namespace -->
    <artifactId>autoconnect-automation</artifactId>  <!-- project name -->
    <version>1.0.0-SNAPSHOT</version>          <!-- SNAPSHOT = under active development -->

    <!-- Properties: define versions once, reference them below. One place to upgrade. -->
    <properties>
        <maven.compiler.source>11</maven.compiler.source>
        <maven.compiler.target>11</maven.compiler.target>
        <project.build.sourceEncoding>UTF-8</project.build.sourceEncoding>
        <selenium.version>4.18.1</selenium.version>
        <testng.version>7.9.0</testng.version>
        <suiteXmlFile>testng.xml</suiteXmlFile>   <!-- overridable from the CLI -->
    </properties>

    <dependencies>
        <dependency>
            <groupId>org.seleniumhq.selenium</groupId>
            <artifactId>selenium-java</artifactId>
            <version>${selenium.version}</version>   <!-- reads from <properties> -->
        </dependency>

        <dependency>
            <groupId>org.testng</groupId>
            <artifactId>testng</artifactId>
            <version>${testng.version}</version>
            <scope>test</scope>                      <!-- only on the test classpath, not packaged -->
        </dependency>

        <dependency>
            <groupId>io.rest-assured</groupId>
            <artifactId>rest-assured</artifactId>
            <version>5.4.0</version>
        </dependency>

        <dependency>
            <groupId>org.apache.poi</groupId>
            <artifactId>poi-ooxml</artifactId>       <!-- Excel .xlsx support -->
            <version>5.2.5</version>
        </dependency>

        <dependency>
            <groupId>com.aventstack</groupId>
            <artifactId>extentreports</artifactId>
            <version>5.1.1</version>
        </dependency>
    </dependencies>

    <build>
        <plugins>
            <!-- Surefire: the plugin that actually EXECUTES the tests -->
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-surefire-plugin</artifactId>
                <version>3.2.5</version>
                <configuration>
                    <suiteXmlFiles>
                        <suiteXmlFile>${suiteXmlFile}</suiteXmlFile>   <!-- switchable per run -->
                    </suiteXmlFiles>
                    <!-- Don't stop the build on test failure; we want the full report -->
                    <testFailureIgnore>false</testFailureIgnore>
                </configuration>
            </plugin>

            <!-- Compiler plugin: pins the Java version -->
            <plugin>
                <artifactId>maven-compiler-plugin</artifactId>
                <version>3.12.1</version>
            </plugin>
        </plugins>
    </build>
</project>
```

**Dependency scopes — a likely follow-up**

| Scope | Meaning |
|---|---|
| `compile` | Default — available everywhere, packaged |
| `test` | Test classpath only, not packaged (TestNG, JUnit) |
| `provided` | Needed to compile, supplied at runtime by the container |
| `runtime` | Not needed to compile, needed to run (JDBC drivers) |

---

## Q69. What Maven commands do you use? 🔴 **P0** `[L1]` ⏱ **60 sec** — *from your L1 list, Q5*

**The lifecycle in order**

```
validate → compile → test → package → verify → install → deploy
```

> **Key concept:** running a later phase runs every earlier phase. `mvn package` implicitly runs `compile` and `test` first.

**Commands I actually use**

```bash
# The workhorse — clean removes /target so there's no stale compiled code
mvn clean test

# Run a specific suite file (via the property defined in pom.xml)
mvn clean test -DsuiteXmlFile=src/test/resources/suites/smoke.xml

# Run against a different environment
mvn clean test -Denv=uat -Dbrowser=firefox

# Run ONE test class
mvn clean test -Dtest=ConfiguratorTest

# Run ONE method in a class
mvn clean test -Dtest=ConfiguratorTest#verifyOnRoadPrice

# Run a TestNG group
mvn clean test -Dgroups=smoke

# Skip tests (used when only building the JAR)
mvn clean install -DskipTests        # compiles tests but doesn't run them
mvn clean install -Dmaven.test.skip=true   # doesn't even compile them

# Debugging dependency problems — genuinely useful, mention it
mvn dependency:tree                 # shows transitive deps and version conflicts

# Force re-download of dependencies when the local repo is corrupted
mvn clean test -U
```

**Say this**

> "The one I run most is `mvn clean test -DsuiteXmlFile=... -Denv=qa`. The `clean` matters more than people think — I've spent time debugging a 'failing' test that was actually stale compiled code in `/target`.
>
> And `mvn dependency:tree` is my go-to when I get a `NoSuchMethodError` at runtime, because that almost always means two dependencies pulled in conflicting versions of the same transitive library."

**Follow-up trap:** *"What's the difference between `install` and `package`?"*
> "`package` produces the JAR in `/target`. `install` also copies it into your local `~/.m2` repository so other local projects can depend on it. `deploy` pushes it to a remote repository like Nexus or Artifactory for the whole team."

---

## Q70. What is the Maven Surefire plugin? 🟠 **P1** `[L1] [L2]` ⏱ **45 sec** — *from Round 1*

**Say this**

> "Surefire is the Maven plugin that **executes unit and integration tests during the `test` phase**. It's the bridge between Maven and TestNG — Maven itself doesn't know how to run a TestNG suite; Surefire detects TestNG on the classpath, reads the `suiteXmlFiles` configuration, and hands execution over to it.
>
> It also generates the raw XML and TXT reports in `target/surefire-reports/`, which is what Jenkins parses to build its trend graphs.
>
> Three things I configure in it:
> - **`suiteXmlFiles`** — which testng.xml to run, parameterised so CI can switch suites
> - **`parallel` and `threadCount`** — though I prefer setting these in testng.xml so they live with the suite definition
> - **`testFailureIgnore`** — whether a test failure fails the whole Maven build"

**Follow-up trap:** *"Surefire vs Failsafe?"*
> "Surefire runs in the `test` phase and **fails the build immediately** on test failure. Failsafe runs integration tests in the `integration-test` phase and **defers** failure reporting to the `verify` phase — so the `post-integration-test` phase still runs and can tear down containers or servers. The naming convention differs too: Surefire picks up `*Test.java`, Failsafe picks up `*IT.java`. For a UI automation suite, Surefire is the right one."

---

## Q71. How do you achieve parallel execution? 🟠 **P1** `[L2]` ⏱ **60 sec**

**Three levels of configuration**

```xml
<!-- 1. In testng.xml — my preferred location, since it lives with the suite -->
<suite name="Regression" parallel="methods" thread-count="4">
```

```java
// 2. In the DataProvider — run the data rows concurrently
@DataProvider(name = "pricingData", parallel = true)
```

```xml
<!-- 3. In Surefire — an alternative to testng.xml -->
<configuration>
    <parallel>methods</parallel>
    <threadCount>4</threadCount>
</configuration>
```

**The three prerequisites — this is what they're really checking**

> "Setting the flag is the easy part. Parallel execution only *works* if three things are true, and getting them wrong produces failures that look random:
>
> **1. Thread-safe driver.** `ThreadLocal<WebDriver>` — never a static driver. A static driver means thread B's `quit()` closes thread A's browser.
>
> **2. No shared mutable state.** No static counters, no shared collections holding test state. Our Extent Report manager also needed a `ThreadLocal<ExtentTest>`, otherwise log entries from different threads interleaved into the wrong test.
>
> **3. Independent test data.** Two threads must not book the same test-drive slot. We generate unique data per thread rather than sharing fixtures. This was our actual bug — two tests intermittently failed because they competed for the same slot.
>
> **How many threads?** We use 4. More isn't automatically faster — each Chrome instance takes roughly 300–500 MB, so on a 8 GB CI agent, 8 browsers causes swapping and everything slows down. I tuned it empirically: 4 gave us 2.5 hours; 8 gave us 2.4 hours with intermittent OOM failures. So 4 was the right trade."

---

## Q72. What reports do you use in your framework? 🟠 **P1** `[L2]` ⏱ **60 sec** — *from your L2 list*

| Report | What it gives | Where it comes from |
|---|---|---|
| **Extent Reports** | Rich HTML — dashboard, pass/fail pie chart, embedded screenshots, step logs, execution timeline | Library + my listener |
| **TestNG default** | `test-output/index.html` — basic, auto-generated | Free with TestNG |
| **Surefire reports** | XML/TXT in `target/surefire-reports/` | Maven Surefire |
| **Jenkins TestNG plugin** | Trend graphs across builds, failure history | Parses the Surefire XML |
| **Allure** | Best-in-class HTML with severity, history, categorisation | Optional — we evaluated it |
| **Playwright HTML reporter** | Built in — includes traces and video per test | Native to Playwright |

**Say this**

> "Extent Reports is our primary report. What makes it worth the setup effort is the **embedded failure screenshot and step log** — a developer can see the failure without running anything, which cut a lot of back-and-forth.
>
> Two implementation details matter:
>
> **Thread safety.** With parallel execution, a shared `ExtentTest` object interleaves logs from different tests. So I wrap it in a `ThreadLocal<ExtentTest>`:
> ```java
> private static final ThreadLocal<ExtentTest> tlTest = new ThreadLocal<>();
> ```
>
> **`flush()` in `@AfterSuite`.** Extent buffers everything in memory and only writes the HTML when `flush()` is called. Forget it and you get an empty report after a 3-hour run — a mistake you make exactly once.
>
> Jenkins archives the HTML and emails the summary, so the team sees results without opening Jenkins."

---

## Q73. How do you schedule your runs? Do you run them daily? 🟠 **P1** `[L2]` ⏱ **60 sec** — *from your L2 list*

**Say this — three triggers**

> "Three separate triggers, matched to three suite sizes:
>
> **1. On every pull request** — the smoke suite, ~40 tests, about 10 minutes. Configured as a GitHub webhook, and it's a required check before merge. Fast feedback is the point; a 3-hour suite on every PR would just get bypassed.
>
> **2. Nightly at 1 AM** — the full regression, ~420 UI plus 180 API tests, roughly 2.5 hours on 4 threads. Jenkins cron:
> ```
> H 1 * * 1-5      # weekdays at ~1 AM. 'H' spreads load if multiple jobs share the hour.
> ```
>
> **3. On demand before a release** — parameterised Jenkins job where I pick the environment, browser and suite. That's the sign-off run.
>
> Results go to a Slack channel with the pass rate and a link to the Extent report, so failures get seen at 9 AM rather than discovered on release day."

**The Jenkins pipeline**

```groovy
pipeline {
    agent any
    parameters {
        choice(name: 'SUITE', choices: ['smoke', 'sanity', 'regression'])
        choice(name: 'ENV',   choices: ['qa', 'uat'])
        choice(name: 'BROWSER', choices: ['chrome', 'firefox'])
    }
    triggers {
        cron('H 1 * * 1-5')                  // nightly weekdays
    }
    stages {
        stage('Checkout') { steps { checkout scm } }

        stage('Test') {
            steps {
                // -B = batch mode, cleaner CI logs; headless because the agent has no display
                sh """mvn clean test -B \
                      -DsuiteXmlFile=src/test/resources/suites/${params.SUITE}.xml \
                      -Denv=${params.ENV} -Dbrowser=${params.BROWSER} -Dheadless=true"""
            }
        }
    }
    post {
        always {
            junit 'target/surefire-reports/*.xml'          // feeds Jenkins trend graphs
            publishHTML(target: [reportDir: 'reports', reportFiles: 'index.html',
                                 reportName: 'Extent Report'])
            archiveArtifacts artifacts: 'reports/**', allowEmptyArchive: true
        }
        failure {
            slackSend channel: '#autoconnect-qa',
                      message: "❌ ${params.SUITE} failed on ${params.ENV} — ${env.BUILD_URL}"
        }
    }
}
```

---

## Q74. If you have 500 test cases, how long would execution take? 🟡 **P2** `[L2]` ⏱ **60 sec** — *from your L2 list*

**Why they ask.** It's an **estimation** question, not a trivia question. They want to see whether you reason with numbers or guess. **Never answer with a bare number.**

**Say this — show the calculation**

> "I'd answer with the arithmetic rather than a number, because it depends on three variables.
>
> **Serial estimate:** our average UI test takes about 50 seconds — roughly 5 seconds of browser launch, 30–35 of interaction and waits, and the teardown. So 500 × 50 s ≈ 25,000 s ≈ **7 hours serial**.
>
> **With parallelism:** 4 threads gives close to 4× on I/O-bound browser tests, so about **1 hour 50 minutes**. Not exactly 4× — there's contention on the app server and some tests are longer than others, so I'd budget around **2 to 2.5 hours**.
>
> **What changes it:** API tests are far faster, around 1–2 seconds each, so a suite that's 60% API drops dramatically. Headless is roughly 20–30% faster than headed. And a slow test environment can dominate everything — we once had a regression run take 5 hours because the QA database hadn't been reindexed.
>
> For reference, our actual 420-UI-plus-180-API suite runs in about 2.5 hours on 4 threads.
>
> And if the real question is 'is that acceptable?' — my answer is that 2.5 hours is fine for a nightly run but far too slow for per-commit feedback. That's why we split out a 10-minute smoke pack. **The right target isn't 'make the whole suite fast', it's 'make the right subset fast.'**"

> **Why this answer wins:** you showed the model, stated your assumptions, gave a real number from your project, and reframed the question toward what actually matters. That's a senior-sounding answer to a junior-sounding question.

---

## Q75. How do you integrate with CI/CD? 🟠 **P1** `[L2]` ⏱ **60 sec**

**Say this — five requirements for a suite to be CI-ready**

> "Getting Jenkins to run `mvn test` is trivial. Making a suite *survivable* in CI is the real work, and it comes down to five things:
>
> **1. Headless execution** — the agent has no display, so `--headless=new` must come from config, not be hardcoded, since I still want headed locally for debugging.
>
> **2. No environment assumptions** — no hardcoded file paths, no dependency on a specific OS. `System.getProperty("user.dir")` not `C:\Users\...`. This is the most common reason a suite passes locally and fails in CI.
>
> **3. Externalised configuration** — URLs and credentials injected as environment variables or Jenkins credentials, never committed. `-Denv=uat` switches everything.
>
> **4. Published artefacts** — the Extent report, screenshots and Surefire XML archived by Jenkins, so a failure can be diagnosed without SSH access to the agent.
>
> **5. Clear failure signalling** — a non-zero exit code fails the build, and a Slack notification with the report link means someone actually sees it.
>
> Our setup: GitHub webhook triggers smoke on every PR as a required merge check; Jenkins cron runs full regression nightly; and a parameterised manual job for release sign-off. The Playwright suite runs in GitHub Actions instead, using the official Playwright Docker image so browser versions are pinned."

---
---

# Part 7 — API Testing

> API questions appear lightly in L1 and deeply in L2. The pattern: definitions first, then *"show me how you'd validate this in REST Assured or Postman."*

---

## Q76. What is API testing and why do it? 🔴 **P0** `[L1]` ⏱ **60 sec**

**Say this**

> "API testing validates the business logic layer directly — sending requests to endpoints and asserting on the response — without going through the UI.
>
> Four reasons it matters, and I'd rank them in this order:
>
> **1. Speed.** An API test takes 1–2 seconds; the equivalent UI test takes 40–50. That's a 30× difference, which is what makes broad coverage affordable.
>
> **2. Stability.** No locators, no waits, no rendering. API tests don't break because a CSS class changed, so the maintenance burden is a fraction of a UI suite's.
>
> **3. Earlier feedback.** The API is usually ready before the UI, so I can start testing during the sprint rather than waiting for a screen.
>
> **4. Better coverage of edge cases.** The UI often prevents invalid input — a form won't let you submit a negative quantity. The API will, and that's exactly where the interesting bugs are. Validation must exist server-side, not just client-side.
>
> In my project this is concrete: our on-road pricing logic has hundreds of combinations of variant, state and offer. Testing all of them through the UI would take hours. Against the pricing API it takes about three minutes, so I test the *calculation* at the API layer and use UI tests only to verify the price is *displayed* correctly."

---

## Q77. REST vs SOAP 🔴 **P0** `[L1]` ⏱ **60 sec**

| | REST | SOAP |
|---|---|---|
| **What it is** | An architectural **style** | A **protocol** with a strict spec |
| **Data format** | JSON, XML, text, HTML | **XML only** |
| **Transport** | HTTP/HTTPS only | HTTP, SMTP, TCP, JMS |
| **Message structure** | Free-form | Mandatory Envelope → Header → Body |
| **Contract** | Optional (OpenAPI/Swagger) | **Mandatory WSDL** |
| **State** | Stateless | Can be stateful |
| **Error format** | HTTP status codes | SOAP Fault element |
| **Performance** | Lighter, faster | Heavier — XML overhead |
| **Security** | HTTPS, OAuth, JWT | WS-Security (built-in, standardised) |
| **Transactions** | No built-in support | ACID support via WS-AT |
| **Caching** | ✅ GET is cacheable | ❌ No |
| **Used for** | Web and mobile APIs, microservices | Banking, telecom, legacy enterprise |

**Say this**

> "The fundamental distinction: **REST is a style, SOAP is a protocol.** REST is a set of architectural constraints you can follow loosely; SOAP is a specification you either comply with or don't.
>
> Practically, REST won for web and mobile because JSON is lighter and the HTTP verbs map naturally to CRUD. SOAP persists where you need its guarantees: built-in WS-Security, formal contracts via WSDL, and distributed transaction support — which is why banking and telecom still run on it.
>
> Our AutoConnect APIs are all REST/JSON. But the dealer inventory sync integrates with the OEM's legacy SOAP service, so I've tested both. The difference in practice is significant: for SOAP I construct an XML envelope and assert with XPath; for REST I send JSON and assert with JsonPath, which is far less ceremony."

---

## Q78. HTTP methods 🔴 **P0** `[L1]` ⏱ **60 sec** — *from your L1 list, Q13*

| Method | Purpose | Idempotent? | Safe? | Body? |
|---|---|---|---|---|
| **GET** | Retrieve | ✅ | ✅ | No |
| **POST** | Create | ❌ | ❌ | Yes |
| **PUT** | Replace entirely | ✅ | ❌ | Yes |
| **PATCH** | Partial update | ❌ (usually) | ❌ | Yes |
| **DELETE** | Remove | ✅ | ❌ | Optional |
| **HEAD** | Headers only, no body | ✅ | ✅ | No |
| **OPTIONS** | Which methods are allowed | ✅ | ✅ | No |
| **TRACE** | Echo the request back (diagnostic) | ✅ | ✅ | No |

**Say this — define the two terms, because that's the real question**

> "**Idempotent** means calling it N times has the same effect as calling it once. GET, PUT and DELETE are idempotent — deleting booking 123 five times leaves the same end state. **POST is not** — five POSTs create five bookings. That's exactly why a duplicate-submission bug matters on our booking endpoint, and why we implement an idempotency key on it.
>
> **Safe** means it doesn't modify server state at all — only GET, HEAD, OPTIONS and TRACE.
>
> **PUT vs PATCH** is the one people get wrong. PUT **replaces the whole resource** — omit a field and it's set to null. PATCH updates **only the fields you send**. So if I PUT a booking with just the date, I could wipe the customer name. That's a real test case: I verify that PUT with a partial body either rejects the request or is documented as full-replacement, because a client sending a partial PUT is a data-loss bug."

---

## Q79. HTTP status codes 🔴 **P0** `[L1]` ⏱ **60 sec** — *from your L1 list, Q12*

| Range | Meaning |
|---|---|
| **1xx** | Informational — 100 Continue, 101 Switching Protocols |
| **2xx** | Success |
| **3xx** | Redirection |
| **4xx** | Client error — *the caller's fault* |
| **5xx** | Server error — *the server's fault* |

**The ones you must know cold**

| Code | Name | When |
|---|---|---|
| **200** | OK | Successful GET/PUT/PATCH |
| **201** | Created | Successful POST — should include a `Location` header |
| **202** | Accepted | Queued for async processing |
| **204** | No Content | Successful DELETE — body intentionally empty |
| **301 / 302** | Moved Permanently / Found | Permanent vs temporary redirect |
| **304** | Not Modified | Cached copy still valid |
| **400** | Bad Request | Malformed syntax or invalid payload |
| **401** | **Unauthorized** | Not authenticated — no or bad credentials |
| **403** | **Forbidden** | Authenticated but **not permitted** |
| **404** | Not Found | Resource doesn't exist |
| **405** | Method Not Allowed | Wrong verb for that endpoint |
| **409** | Conflict | Duplicate resource, or version conflict |
| **415** | Unsupported Media Type | Wrong `Content-Type` |
| **422** | Unprocessable Entity | Syntactically valid, semantically invalid |
| **429** | Too Many Requests | Rate limit exceeded |
| **500** | Internal Server Error | Unhandled server exception |
| **502** | Bad Gateway | Upstream service returned an invalid response |
| **503** | Service Unavailable | Down or overloaded |
| **504** | Gateway Timeout | Upstream didn't respond in time |

**The distinctions they'll probe**

> "**401 vs 403** is the classic. 401 means 'I don't know who you are' — authentication failed or is missing. 403 means 'I know who you are and you're not allowed' — authorisation failed. Getting this wrong is a real defect: I've raised a bug where our API returned 401 for a valid dealer token accessing another dealer's inventory. It should have been 403, and the wrong code makes clients retry authentication pointlessly.
>
> **400 vs 422.** 400 is malformed — broken JSON. 422 is well-formed but semantically wrong — a valid JSON booking with a date in the past.
>
> **A tester's point worth making:** I also test that error codes are *correct*, not just that they're errors. An API returning 200 with `{"error": "invalid"}` in the body is a defect — clients rely on status codes for control flow. And a 500 is always a bug, even on invalid input; bad input should produce a 400, not an unhandled exception."

---

## Q80. Write test scenarios for a Login API 🔴 **P0** `[L1] [L2]` ⏱ **2 min**

**Why they ask.** It's the best single test of whether you think in coverage. **Structure the answer by category** — a flat list of ten cases scores far lower than four organised categories.

**Say this** — `POST /api/v1/auth/login` with `{username, password}`

### 1. Positive / happy path
- Valid credentials → **200**, response contains a token, correct user role and expiry
- Token is actually usable — call a protected endpoint with it and get 200
- Username case-insensitivity, if specified
- Response time within the SLA (< 1 s)

### 2. Negative — authentication
- Valid username, wrong password → **401** (not 200, not 500)
- Non-existent username → **401** with the **same generic message** as wrong password
- Empty username → **400** with a field-level error
- Empty password → **400**
- Both empty → **400**, and ideally *both* errors returned, not just the first
- Correct password, wrong case → 401 (passwords must be case-sensitive)

> **Say this explicitly:** *"A subtle but important case — a wrong password and a non-existent user must return the **identical** message. If they differ, that's user enumeration: an attacker can discover which usernames exist. I've raised that as a security defect."*

### 3. Negative — request structure
- Missing `Content-Type: application/json` → **415**
- Malformed JSON → **400**, not 500
- Missing a required field entirely → **400**
- Extra unexpected fields → should be ignored, not 500
- Wrong HTTP method, e.g. GET → **405**
- Very long username, 10,000 characters → **400**, no crash

### 4. Security
- SQL injection in username — `admin' OR '1'='1` → 401, **not** a successful login
- XSS payload — `<script>alert(1)</script>` → rejected or sanitised, never reflected raw
- Password must **not** appear in the response body or in server logs
- **Rate limiting** — N failed attempts → **429** or account lockout
- Account lockout after threshold, and correct unlock behaviour
- Token must be signed and expire; an expired token → 401
- A tampered token → 401
- Endpoint must reject plain HTTP if HTTPS is required

### 5. Business rules (our project)
- A dealer account disabled by the OEM → **403** with a clear reason
- A dealer whose contract has expired → 403
- Correct role in the token — a sales user must not receive admin scopes
- Concurrent login from two devices — allowed or invalidates the first, per spec

### 6. Data & performance
- Response schema matches the contract (JSON schema validation)
- Load: 100 concurrent logins → no degradation, no 5xx
- Unicode username handled correctly

**Close with this**

> "And I'd ask one question before writing any of it: **is the lockout threshold specified?** If the requirement doesn't state it, that's an ambiguity to raise in grooming rather than guess at — because 'after some failed attempts' isn't testable."

---

## Q81. How do you validate status code, headers, JSON schema and response time? 🔴 **P0** `[L2]` ⏱ **90 sec**

**REST Assured — all four validations**

```java
public class PricingApiTest {

    @BeforeClass
    public void setup() {
        RestAssured.baseURI = ConfigReader.get().getProperty("apiBaseUri");
    }

    @Test
    public void validateOnRoadPriceApi() {

        given()
            .header("Authorization", "Bearer " + token)      // auth header
            .contentType(ContentType.JSON)
            .queryParam("model", "Vitara")
            .queryParam("variant", "VX")
            .queryParam("state", "MH")
        .when()
            .get("/pricing/on-road")
        .then()
            // ---- 1. STATUS CODE ----
            .statusCode(200)                                  // exact code
            .statusCode(anyOf(is(200), is(304)))              // or one of several

            // ---- 2. HEADERS ----
            .header("Content-Type", containsString("application/json"))
            .header("X-RateLimit-Remaining", notNullValue())
            .header("Cache-Control", "no-store")              // pricing must never be cached
            .cookie("sessionId", notNullValue())

            // ---- 3. RESPONSE TIME ----
            .time(lessThan(1500L), TimeUnit.MILLISECONDS)     // SLA assertion

            // ---- 4. JSON SCHEMA ----
            // Validates structure, data types and required fields against a stored contract.
            // This catches a field renamed or a number silently becoming a string.
            .body(matchesJsonSchemaInClasspath("schemas/on-road-price-schema.json"))

            // ---- 5. BODY VALUES ----
            .body("model", equalTo("Vitara"))
            .body("variant", equalTo("VX"))
            .body("breakup.exShowroom", greaterThan(0))
            .body("breakup.size()", equalTo(5))
            .body("offers.name", hasItems("Exchange Bonus"))   // list contains
            .body("onRoadPrice", notNullValue());
    }
}
```

**The JSON schema file**

```json
{
  "$schema": "http://json-schema.org/draft-07/schema#",
  "type": "object",
  "required": ["model", "variant", "onRoadPrice", "breakup"],
  "properties": {
    "model":        { "type": "string" },
    "variant":      { "type": "string" },
    "onRoadPrice":  { "type": "number", "minimum": 0 },
    "breakup": {
      "type": "object",
      "required": ["exShowroom", "roadTax", "insurance"],
      "properties": {
        "exShowroom": { "type": "number" },
        "roadTax":    { "type": "number" },
        "insurance":  { "type": "number" }
      }
    }
  }
}
```

**Extracting and doing business validation — the important part**

```java
@Test
public void validatePriceArithmetic() {
    Response response = given().header("Authorization", "Bearer " + token)
            .queryParam("model", "Vitara").queryParam("variant", "VX").queryParam("state", "MH")
            .when().get("/pricing/on-road")
            .then().statusCode(200).extract().response();

    // Extract with JsonPath
    double exShowroom = response.jsonPath().getDouble("breakup.exShowroom");
    double roadTax    = response.jsonPath().getDouble("breakup.roadTax");
    double insurance  = response.jsonPath().getDouble("breakup.insurance");
    double onRoad     = response.jsonPath().getDouble("onRoadPrice");

    // THE REAL TEST: does the total actually equal the sum of its parts?
    // Schema validation only proves the fields exist — this proves the LOGIC is right.
    double expected = exShowroom + roadTax + insurance;
    Assert.assertEquals(onRoad, expected, 1.0,
        "On-road price does not equal the sum of its breakup components");

    // Cross-layer check: does the UI show the same number the API returns?
    // This is where API and UI testing meet — a mismatch is a real, user-visible bug.
}
```

**Say this to close**

> "The distinction I'd emphasise: schema validation proves the **contract** is intact; value assertions prove the **logic** is right. Both are needed. A schema check would happily pass an on-road price of ₹1 — it's a valid number. Only the arithmetic assertion catches a broken tax calculation.
>
> And the highest-value test in my project is actually the cross-layer one: assert the API's computed price matches the number rendered in the UI. We found a genuine rounding-mismatch defect that way — the API returned two decimal places and the UI rounded differently, so the displayed on-road price was off by a rupee. Small, but on a legal price disclosure it mattered to the client."

---

## Q82. How do you handle API authentication? 🟠 **P1** `[L2]` ⏱ **75 sec**

```java
// ---------- 1. BASIC AUTH: username:password, base64-encoded in the header ----------
given().auth().preemptive().basic("dealer_user", "Pass@123")
// 'preemptive' sends the header immediately instead of waiting for a 401 challenge — one less round trip
    .when().get("/dealer/profile");

// Manual equivalent, to show you understand what it does:
String encoded = Base64.getEncoder().encodeToString("dealer_user:Pass@123".getBytes());
given().header("Authorization", "Basic " + encoded);
// ⚠️ Base64 is ENCODING, not encryption — trivially reversible. Only acceptable over HTTPS.


// ---------- 2. BEARER TOKEN / JWT: the most common today ----------
String token = given().contentType(ContentType.JSON)
        .body(Map.of("username", "dealer_user", "password", "Pass@123"))
    .when().post("/auth/login")
    .then().statusCode(200)
    .extract().path("accessToken");              // pull the token out of the login response

given().header("Authorization", "Bearer " + token)   // reuse it on every subsequent call
    .when().get("/dealer/inventory");

// REST Assured shorthand
given().auth().oauth2(token);


// ---------- 3. API KEY: header or query parameter ----------
given().header("x-api-key", ConfigReader.get().getProperty("apiKey"));
given().queryParam("api_key", apiKey);          // less secure — keys end up in server logs and browser history


// ---------- 4. OAUTH 2.0: client credentials flow (service-to-service) ----------
String accessToken = given()
        .contentType(ContentType.URLENC)                  // OAuth token endpoints expect form-encoded
        .formParam("grant_type", "client_credentials")
        .formParam("client_id", clientId)
        .formParam("client_secret", clientSecret)
        .formParam("scope", "inventory.read booking.write")
    .when().post("/oauth2/token")
    .then().statusCode(200)
    .extract().path("access_token");
```

**Reusing the token — the framework pattern**

```java
public class AuthManager {
    private static String cachedToken;
    private static Instant expiresAt;

    public static synchronized String getToken() {
        // Re-authenticate only when expired. Logging in per test wastes seconds × hundreds of tests.
        if (cachedToken == null || Instant.now().isAfter(expiresAt.minusSeconds(60))) {  // 60s safety margin
            Response r = given().contentType(ContentType.JSON)
                    .body(Map.of("username", user, "password", pass))
                    .post("/auth/login");
            cachedToken = r.path("accessToken");
            expiresAt = Instant.now().plusSeconds(r.path("expiresIn"));
        }
        return cachedToken;
    }
}
```

**The OAuth explanation they want**

> "OAuth 2.0 is an **authorisation** framework, not an authentication protocol — that's the common confusion. It lets a third party access resources on a user's behalf without ever seeing their password.
>
> Four grant types, and which one you use depends on the client:
> - **Authorization Code** — for web apps with a user present. The most secure; the token never passes through the browser URL. With PKCE it's also the recommendation for mobile.
> - **Client Credentials** — service-to-service, no user. This is what our dealer inventory sync uses.
> - **Refresh Token** — exchange a long-lived refresh token for a new access token without re-prompting.
> - **Implicit** and **Password** grants — both now discouraged/deprecated.
>
> **What I test on auth, specifically:** expired token → 401; tampered signature → 401; token from dealer A used on dealer B's data → **403 not 401**; refresh flow issues a working token; and the token doesn't appear in any log. That last one is a real finding — we had an access token being written to the application log at INFO level."

---

## Q83. Postman — global vs environment vs collection variables 🟠 **P1** `[L2]` ⏱ **60 sec** — *from Image 1, Q8*

**Scope hierarchy — narrowest wins**

```
Global  <  Collection  <  Environment  <  Data  <  Local
(broadest)                                        (narrowest — highest priority)
```

| Scope | Visible to | Use for |
|---|---|---|
| **Global** | Every collection in the workspace | Rarely — a shared constant across all projects |
| **Collection** | One collection, all environments | Values tied to the API, not the environment — API version, fixed paths |
| **Environment** | The selected environment only | **The main one** — base URLs, credentials, tokens per QA/UAT/Prod |
| **Data** | One iteration of a Collection Run | CSV/JSON rows in data-driven runs |
| **Local** | One request only | Temporary values inside a script |

**Say this**

> "The distinction that matters in practice is **environment vs collection**. Environment variables hold anything that changes between QA, UAT and Prod — base URL, credentials, tokens. Collection variables hold things that belong to the API itself and don't vary by environment.
>
> The reason it matters: I have one collection and three environment files. Switching the environment dropdown reruns the entire collection against UAT with zero edits. If I'd put base URLs in collection variables, I'd need three copies of the collection.
>
> The precedence rule is that the **narrowest scope wins** — a local variable overrides environment, which overrides collection, which overrides global. That's occasionally surprising when you've set the same name in two places."

**Setting variables from a script — the pattern that makes collections work**

```javascript
// In the Login request's "Tests"/"Scripts" tab — capture the token for later requests
const response = pm.response.json();

pm.environment.set("authToken", response.accessToken);   // environment scope: per-env token
pm.collectionVariables.set("apiVersion", "v1");          // collection scope
pm.globals.set("sharedConstant", "value");               // global — use sparingly

// ⚠️ Never use pm.environment.set for secrets you'll commit — Postman exports include environment
// values unless marked 'secret'. We keep credentials in a non-exported local environment.

// Then in later requests, reference it in the header as: Bearer {{authToken}}
```

**Assertions in Postman**

```javascript
pm.test("Status is 200", () => pm.response.to.have.status(200));

pm.test("Response time under 1s", () => pm.expect(pm.response.responseTime).to.be.below(1000));

pm.test("On-road price is the sum of the breakup", () => {
    const b = pm.response.json().breakup;
    const total = b.exShowroom + b.roadTax + b.insurance;
    pm.expect(pm.response.json().onRoadPrice).to.be.closeTo(total, 1);   // tolerance for rounding
});

pm.test("Schema is valid", () => {
    const schema = { /* JSON schema */ };
    pm.response.to.have.jsonSchema(schema);
});
```

---

## Q84. Data-driven testing in Postman 🟠 **P1** `[L2]` ⏱ **60 sec** — *from Round 1*

**Say this — the Collection Runner with a data file**

> "Postman's Collection Runner accepts a CSV or JSON data file and runs the whole collection once per row, exposing each column as a variable.
>
> **Setup:**
> 1. Create the CSV with column headers matching the variable names
> 2. In the request, reference them as `{{model}}`, `{{variant}}`, `{{expectedPrice}}`
> 3. Runner → select the collection → **Select File** → choose the CSV → set iterations
> 4. Assertions in the Tests tab run per iteration
>
> **pricing_data.csv**
> ```csv
> model,variant,state,expectedPrice
> Vitara,VX,MH,1208900
> Vitara,ZX,MH,1345600
> Baleno,Alpha,KA,1012300
> ```
>
> **The request body / params**
> ```json
> { "model": "{{model}}", "variant": "{{variant}}", "state": "{{state}}" }
> ```
>
> **The test**
> ```javascript
> pm.test(`Price correct for ${pm.iterationData.get("model")} ${pm.iterationData.get("variant")}`, () => {
>     const expected = Number(pm.iterationData.get("expectedPrice"));   // CSV values are STRINGS — convert
>     pm.expect(pm.response.json().onRoadPrice).to.be.closeTo(expected, 1);
> });
> ```
>
> Two gotchas worth mentioning: **everything from a CSV is a string**, so numeric comparisons need `Number()` — this bites everyone once. And for CI I use **Newman**, Postman's CLI, since the GUI Runner can't run in a pipeline:
> ```bash
> newman run AutoConnect.postman_collection.json \
>        -e qa.postman_environment.json \
>        -d pricing_data.csv \
>        -r cli,htmlextra --reporter-htmlextra-export report.html
> ```
>
> Honest caveat: for large data-driven suites I prefer REST Assured, because the data layer, assertions and reporting are all in one codebase that lives in Git and code-reviews properly. Postman is excellent for exploration and for sharing with non-automation colleagues, less good as a long-term regression asset."

---

## Q85. The GET request takes 1 minute — is there another HTTP method? 🟠 **P1** `[L2]` ⏱ **60 sec** — *from Image 1, Q9*

**Why this question is interesting.** It's a **trap**. The expected wrong answer is "use POST instead" or "use HEAD". Changing the method does not make slow server-side processing faster. **The right answer is to reject the premise.**

**Say this**

> "I'd push back on the framing, because switching the HTTP method won't help — the method doesn't determine how long the server takes to compute the response. If a GET takes a minute, a POST to the same logic takes a minute too.
>
> So I'd separate two questions: **is this a bug, or is it the design?**
>
> **If it's a performance defect** — which is what I'd suspect first — I'd raise it and investigate:
> - Where is the minute going? Check the server's own timing, not just the client's. Use `Server-Timing` headers if available.
> - Is it a missing database index, or an N+1 query? That's the usual culprit.
> - Is the response enormous? Then **pagination** is the fix — `?page=1&size=50` — not a different verb.
> - Is it computing something cacheable? Then add proper `Cache-Control` and `ETag` support, and subsequent calls return **304 Not Modified** almost instantly. *That* is a legitimate HTTP-level answer.
>
> **If a minute of processing is genuinely unavoidable** — say a full dealer-network inventory reconciliation — then the correct design is **asynchronous**, and this is where the method does change:
>
> ```
> POST /reports/inventory-reconciliation   → 202 Accepted
>                                            Location: /jobs/abc123
> GET  /jobs/abc123                        → 200 {"status":"processing"}
> GET  /jobs/abc123                        → 200 {"status":"done","resultUrl":"..."}
> ```
>
> So POST *is* part of the answer — but as part of an async job pattern returning **202 Accepted**, not as a drop-in replacement for GET.
>
> **What I'd actually do as a tester:** raise it as a performance defect with the measured time, ask the dev team where the time is spent, and add a response-time assertion to the API suite so a regression is caught automatically:
> ```java
> .time(lessThan(2000L), TimeUnit.MILLISECONDS)
> ```
> And for the test suite in the meantime, increase that specific test's timeout — but with a comment linking the defect ID, so it doesn't become permanently accepted."

> **Why this answer wins:** you refused a false premise, diagnosed properly, gave a real HTTP-level answer (caching/304), gave the correct architectural answer (202 async), and ended with the tester's action. That's a complete answer to a question designed to catch people guessing.

---

## Q86. Do you know the use of the TRACE method? 🔵 **P3** `[L2]` ⏱ **30 sec** — *from Image 1, Q10*

**Say this — short, and include the security point**

> "TRACE is a diagnostic method: the server echoes the received request back in the response body, so you can see exactly what reached it after any proxies modified it. It's a loopback test for debugging intermediaries.
>
> **But the more useful answer is that it should be disabled in production.** TRACE enables an attack called **Cross-Site Tracing (XST)** — an attacker can use it to read cookies marked `HttpOnly`, because the echo includes the request headers, bypassing the protection that stops JavaScript reading those cookies.
>
> So from a security-testing perspective, **TRACE returning 200 is a finding.** It should return **405 Method Not Allowed**. That's a check I'd include in an API security pass:
>
> ```java
> given().when().request("TRACE", "/api/v1/dealer/profile")
>        .then().statusCode(405);   // TRACE must be disabled — a 200 here is a security defect
> ```
>
> Related: I'd also verify OPTIONS doesn't leak more than it should, and that the `Allow` header doesn't advertise methods that shouldn't be exposed."

> **Note:** the image says "write ans in comment", meaning it's a social-media quiz question. Panels who ask it are usually testing whether you know the *security* angle — that's the part worth saying.

---

## Q87. How do you automate APIs using REST Assured? 🔴 **P0** `[L2]` ⏱ **90 sec**

**The structure — BDD given/when/then**

```java
public class BookingApiTest {

    private static RequestSpecification requestSpec;    // reusable request config
    private static ResponseSpecification responseSpec;  // reusable response expectations

    @BeforeClass
    public void setupSpecs() {
        // RequestSpecBuilder: define common config ONCE instead of repeating it in every test
        requestSpec = new RequestSpecBuilder()
                .setBaseUri(ConfigReader.get().getProperty("apiBaseUri"))
                .setContentType(ContentType.JSON)
                .addHeader("Authorization", "Bearer " + AuthManager.getToken())
                .addFilter(new RequestLoggingFilter())     // log requests — invaluable for CI debugging
                .addFilter(new ResponseLoggingFilter())
                .build();

        responseSpec = new ResponseSpecBuilder()
                .expectContentType(ContentType.JSON)
                .expectResponseTime(lessThan(2000L), TimeUnit.MILLISECONDS)
                .build();
    }

    // ---------- POST: create a booking ----------
    @Test
    public void createBooking() {
        // Serialise a POJO instead of a hand-written JSON string —
        // compile-time safety, and a renamed field becomes a compile error not a runtime surprise
        BookingRequest payload = BookingRequest.builder()
                .model("Vitara").variant("VX").colour("Pearl White")
                .dealerId("DLR-MH-014")
                .customerPhone("9876543210")
                .bookingAmount(25000)
                .build();

        Response response = given()
                .spec(requestSpec)
                .body(payload)                       // REST Assured auto-serialises the POJO via Jackson
            .when()
                .post("/bookings")
            .then()
                .spec(responseSpec)
                .statusCode(201)                     // 201 Created, not 200
                .header("Location", notNullValue())  // must return the new resource's URI
                .body("status", equalTo("CONFIRMED"))
                .extract().response();

        // Deserialise into a POJO for type-safe assertions
        BookingResponse booking = response.as(BookingResponse.class);
        Assert.assertNotNull(booking.getBookingId());

        // Store for chained tests / cleanup
        TestContext.set("bookingId", booking.getBookingId());
    }

    // ---------- GET: verify what we created ----------
    @Test(dependsOnMethods = "createBooking")
    public void getBooking() {
        given().spec(requestSpec)
               .pathParam("id", TestContext.get("bookingId"))
        .when().get("/bookings/{id}")
        .then().spec(responseSpec)
               .statusCode(200)
               .body("model", equalTo("Vitara"))
               .body("bookingAmount", equalTo(25000));
    }

    // ---------- Negative test ----------
    @Test
    public void bookingWithPastDateIsRejected() {
        given().spec(requestSpec)
               .body(Map.of("model", "Vitara", "testDriveDate", "2020-01-01"))
        .when().post("/bookings")
        .then().statusCode(400)                       // 400, NOT 500 — an unhandled exception is a bug
               .body("errors.field", hasItem("testDriveDate"));
    }

    // ---------- Cleanup: don't leave test data behind ----------
    @AfterClass(alwaysRun = true)
    public void cleanup() {
        String id = TestContext.get("bookingId");
        if (id != null) {
            given().spec(requestSpec).delete("/bookings/" + id).then().statusCode(anyOf(is(204), is(200)));
        }
    }
}
```

**Say this about the design choices**

> "Three things I'd highlight. **RequestSpecification** removes duplication — base URI, content type and auth defined once rather than in 180 tests, so an auth change is one edit. **POJO serialisation** over raw JSON strings, because a typo in a JSON string is a runtime failure while a typo in a POJO field is a compile error. And **cleanup in `@AfterClass(alwaysRun = true)`** — every booking my tests create must be deleted, otherwise the QA database fills with orphaned records and the dealer's inventory counts drift, which then breaks other tests."

---

## Q88. How do you test APIs in Playwright? 🟠 **P1** `[L2]` ⏱ **60 sec**

```ts
import { test, expect } from '@playwright/test';

// Playwright's 'request' fixture is a full HTTP client — no browser needed, so these are fast
test('on-road price API returns a correct breakup', async ({ request }) => {

  const response = await request.get('/api/v1/pricing/on-road', {
    params: { model: 'Vitara', variant: 'VX', state: 'MH' },
    headers: { Authorization: `Bearer ${process.env.TOKEN}` },
  });

  expect(response.status()).toBe(200);
  expect(response.headers()['content-type']).toContain('application/json');

  const body = await response.json();
  expect(body.onRoadPrice).toBeGreaterThan(0);

  // Business logic assertion
  const { exShowroom, roadTax, insurance } = body.breakup;
  expect(body.onRoadPrice).toBeCloseTo(exShowroom + roadTax + insurance, 0);
});
```

**The killer feature — hybrid UI + API in one test**

```ts
test('UI displays the same price the API returns', async ({ page, request }) => {
  // 1. Get the authoritative value from the API
  const api = await request.get('/api/v1/pricing/on-road',
                { params: { model: 'Vitara', variant: 'VX', state: 'MH' } });
  const expectedPrice = (await api.json()).onRoadPrice;

  // 2. Drive the UI to the same configuration
  await page.goto('/configurator');
  await page.getByRole('combobox', { name: 'Variant' }).selectOption('VX');
  await page.getByRole('textbox', { name: 'State' }).fill('Maharashtra');

  // 3. Assert the UI matches the API — catches display/rounding bugs
  const displayed = await page.getByTestId('on-road-price').textContent();
  const uiPrice = Number(displayed!.replace(/[^0-9.]/g, ''));
  expect(uiPrice).toBeCloseTo(expectedPrice, 0);
});
```

**And network mocking — impossible natively in Selenium**

```ts
test('shows a friendly error when the pricing service fails', async ({ page }) => {
  // Intercept the call and force a 500 — testing an error path we cannot reproduce on demand
  await page.route('**/api/v1/pricing/**', route =>
    route.fulfill({ status: 500, body: JSON.stringify({ error: 'Service unavailable' }) })
  );

  await page.goto('/configurator');
  await page.getByRole('combobox', { name: 'Variant' }).selectOption('VX');

  // The real requirement: the UI must degrade gracefully, not show a blank price or crash
  await expect(page.getByRole('alert')).toContainText('Unable to fetch price');
});
```

**Say this**

> "Two capabilities here that genuinely changed how we test. First, **API and UI in the same test** with shared auth state — I use the API to set up data and to source the expected value, then verify the UI renders it. That's how we found the rounding mismatch.
>
> Second, **`page.route()` for network mocking.** Testing 'what does the UI do when the pricing service returns a 500' is nearly impossible in Selenium without a proxy, but it's four lines in Playwright. Error-path coverage went from almost zero to properly tested, and we found that our configurator showed a blank price rather than an error message — a real defect we'd never have caught otherwise."

---

## Q89. What's your approach to testing API integrations for order and delivery tracking? 🟡 **P2** `[L2]` ⏱ **75 sec**

*(Adapted to our domain: vehicle booking → dispatch → delivery tracking.)*

**Say this — structure it as five layers**

> "Our equivalent flow is booking → allocation → dispatch from the plant → in-transit → dealer delivery, and it spans three systems: our platform, the OEM's dispatch system and a logistics partner. So I test it in five layers:
>
> **1. Contract testing.** Each integration point has an agreed schema. I validate both directions against a stored JSON schema, so if the logistics partner renames `eta` to `estimatedArrival`, our test fails immediately rather than the UI silently showing blank. This is the highest-value layer for integrations.
>
> **2. Status transition testing.** Tracking is a state machine, so I test the transitions, not just the states: valid paths (dispatched → in-transit → delivered), and invalid ones (delivered → in-transit must be rejected). Skipped states are the bug class here — going straight to delivered without dispatch means the customer never got a notification.
>
> **3. Failure and resilience.** This is where integration testing earns its keep. What happens when the partner API times out, returns 500, returns a malformed body, or returns a status we don't recognise? I use mocks to force each case. The requirements I check: our system retries with backoff, doesn't lose the update, doesn't show the customer a blank screen, and logs enough to diagnose.
>
> **4. Data consistency.** The status in our DB, the status the API returns and the status the UI shows must agree. Reconciliation bugs are common when updates arrive via webhook — we found duplicate webhook deliveries creating two status records, so I added an idempotency test.
>
> **5. End-to-end with stubs.** A full journey against a stubbed partner, so it's deterministic and runs in CI. I keep a small number of true end-to-end tests against the partner's sandbox, run nightly rather than per-commit, because third-party sandboxes are unreliable and would make the main suite flaky.
>
> The practical lesson from this work: **mock the third party for regression, use the real sandbox for a scheduled confidence check.** Mixing them makes your suite as reliable as someone else's test environment."

---

## Q90. What is API mocking / virtualisation and when do you use it? 🟡 **P2** `[L2]` ⏱ **45 sec**

**Say this**

> "Mocking replaces a real dependency with a controlled fake that returns predetermined responses. I use it in four situations:
>
> 1. **The dependency doesn't exist yet.** The UI is built before the API — I mock against the agreed contract so testing starts in the same sprint rather than the next one.
> 2. **Error paths I can't trigger on demand.** I can't ask the payment gateway to return a 503, but I can mock it. This is the biggest coverage win.
> 3. **Third-party cost or rate limits.** The credit-check API charges per call and rate-limits us, so regression runs against a mock.
> 4. **Determinism.** A real partner sandbox returns different data day to day, which makes assertions flaky.
>
> Tools: **WireMock** for the Java suite, **`page.route()`** natively in Playwright, and Postman mock servers for quick sharing.
>
> The important caveat, and I'd say it unprompted: **a mock tests your code against your assumptions, not against reality.** If the partner changes their response format, every mocked test still passes while production breaks. So mocks must be paired with a scheduled contract test against the real sandbox. We learned that the hard way — a partner changed a date format from ISO to epoch and our fully-green suite didn't notice."

---
---

# Part 8 — SQL & Database

> Short, high-yield section. These are quick-fire questions — know them cold and you bank easy marks.

---

## Q91. Write a query to fetch the second highest salary 🔴 **P0** `[L1] [L2]` ⏱ **60 sec**

**Give multiple approaches — that's what's being graded.**

```sql
-- ============ Approach 1: subquery with MAX — the clearest to explain ============
SELECT MAX(salary) AS second_highest
FROM employees
WHERE salary < (SELECT MAX(salary) FROM employees);
-- Inner query finds the highest; outer finds the highest of everything below it.
-- Handles duplicates correctly: if two people earn the top salary, this still returns the NEXT distinct value.


-- ============ Approach 2: LIMIT / OFFSET (MySQL, PostgreSQL) ============
SELECT DISTINCT salary
FROM employees
ORDER BY salary DESC
LIMIT 1 OFFSET 1;        -- skip 1 row, take 1. DISTINCT is essential or duplicates break it.


-- ============ Approach 3: DENSE_RANK — the best answer, and scales to Nth ============
SELECT salary
FROM (
    SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk
    FROM employees
) ranked
WHERE rnk = 2;
-- DENSE_RANK gives tied salaries the SAME rank with no gaps: 100,100,90 → ranks 1,1,2
-- RANK would produce 1,1,3 — so rnk=2 returns nothing. This distinction is the follow-up question.
-- ROW_NUMBER would give 1,2,3 — returning the second PERSON, not the second SALARY.


-- ============ Approach 4: correlated subquery — Nth highest, generalised ============
SELECT DISTINCT salary
FROM employees e1
WHERE (SELECT COUNT(DISTINCT salary) FROM employees e2 WHERE e2.salary > e1.salary) = 1;
-- Change 1 → N-1 for the Nth highest.


-- ============ Second highest PER DEPARTMENT — the follow-up they love ============
SELECT department_id, salary
FROM (
    SELECT department_id, salary,
           DENSE_RANK() OVER (PARTITION BY department_id ORDER BY salary DESC) AS rnk
    FROM employees
) t
WHERE rnk = 2;
-- PARTITION BY restarts the ranking for each department — this is THE window-function pattern.
```

**Say this — the ranking-function distinction, unprompted**

| Function | 100, 100, 90, 80 → |
|---|---|
| `ROW_NUMBER()` | 1, 2, 3, 4 — always unique, arbitrary tie-break |
| `RANK()` | 1, 1, **3**, 4 — ties share a rank, then a **gap** |
| `DENSE_RANK()` | 1, 1, **2**, 3 — ties share a rank, **no gap** |

> "That's why `DENSE_RANK` is correct for 'second highest salary' and `ROW_NUMBER` is not. With `ROW_NUMBER`, if two people tie for first, rank 2 returns the *second person at the top salary* rather than the second-highest salary. It's a real logic bug, and knowing why is more valuable than memorising the query."

**Follow-up trap:** *"What if there is no second-highest salary?"*
> "The MAX subquery returns `NULL`, and the LIMIT/OFFSET version returns zero rows. Which behaviour you want depends on the caller — `NULL` is often easier for an application to handle than an empty result set. Worth knowing you'd get different answers from the two approaches."

---

## Q92. Explain INNER, LEFT, RIGHT and FULL JOIN with examples 🔴 **P0** `[L1]` ⏱ **90 sec**

**Sample data**

```
bookings                          dealers
+----+----------+-----------+     +-----------+-------------+
| id | model    | dealer_id |     | dealer_id | city        |
+----+----------+-----------+     +-----------+-------------+
| 1  | Vitara   | D01       |     | D01       | Pune        |
| 2  | Baleno   | D02       |     | D02       | Bengaluru   |
| 3  | Swift    | NULL      |     | D03       | Chennai     |  ← no bookings
+----+----------+-----------+     +-----------+-------------+
                    ↑ unassigned
```

```sql
-- ============ INNER JOIN: only rows matching in BOTH tables ============
SELECT b.id, b.model, d.city
FROM bookings b
INNER JOIN dealers d ON b.dealer_id = d.dealer_id;
-- → 2 rows (Vitara/Pune, Baleno/Bengaluru)
-- Excludes Swift (no dealer) AND Chennai (no bookings)


-- ============ LEFT JOIN: ALL left rows + matches from the right ============
SELECT b.id, b.model, d.city
FROM bookings b
LEFT JOIN dealers d ON b.dealer_id = d.dealer_id;
-- → 3 rows. Swift appears with city = NULL.
-- THE MOST USED JOIN — "give me everything on the left, enriched where possible"


-- ============ RIGHT JOIN: ALL right rows + matches from the left ============
SELECT b.id, b.model, d.city
FROM bookings b
RIGHT JOIN dealers d ON b.dealer_id = d.dealer_id;
-- → 3 rows. Chennai appears with model = NULL.
-- Rarely used — you can always swap the tables and use LEFT, which reads more naturally.


-- ============ FULL OUTER JOIN: everything from both sides ============
SELECT b.id, b.model, d.city
FROM bookings b
FULL OUTER JOIN dealers d ON b.dealer_id = d.dealer_id;
-- → 4 rows: both matches, plus Swift (NULL city) AND Chennai (NULL model)
-- ⚠️ NOT supported in MySQL — emulate with LEFT JOIN UNION RIGHT JOIN


-- ============ CROSS JOIN: Cartesian product, every combination ============
SELECT m.model, c.colour FROM models m CROSS JOIN colours c;
-- 6 models × 8 colours = 48 rows. Genuinely useful for GENERATING test data combinations.


-- ============ SELF JOIN: a table joined to itself ============
SELECT e.name AS employee, m.name AS manager
FROM employees e
LEFT JOIN employees m ON e.manager_id = m.employee_id;
-- LEFT JOIN so the CEO (manager_id NULL) still appears
```

**The tester's angle — say this, it differentiates you**

> "The join question I care about most as a tester is the **anti-join** — finding orphans and data-integrity problems:
>
> ```sql
> -- Bookings pointing at a dealer that doesn't exist = a referential integrity bug
> SELECT b.* FROM bookings b
> LEFT JOIN dealers d ON b.dealer_id = d.dealer_id
> WHERE d.dealer_id IS NULL AND b.dealer_id IS NOT NULL;
> ```
>
> That `LEFT JOIN ... WHERE right IS NULL` pattern is how you find 'rows in A with no match in B'. I use it constantly for backend validation — it caught a real defect where deleting a dealer left their bookings orphaned instead of blocking the delete."

**Follow-up traps**

| They'll ask | Answer |
|---|---|
| *"JOIN condition in `ON` vs `WHERE` — does it matter?"* | "For INNER JOIN, no. **For LEFT JOIN it matters enormously.** A condition in `ON` filters before the join, preserving unmatched left rows; the same condition in `WHERE` filters after, which discards the NULL rows and silently turns your LEFT JOIN into an INNER JOIN. That's a classic bug." |
| *"UNION vs UNION ALL vs JOIN?"* | "JOIN combines columns horizontally. UNION stacks rows vertically and **removes duplicates**, which requires a sort and is slower. UNION ALL keeps duplicates and is faster — use it unless you specifically need deduplication." |

---

## Q93. How do you find and remove duplicate records? 🔴 **P0** `[L1] [L2]` ⏱ **75 sec**

```sql
-- ============ FIND duplicates ============
SELECT customer_phone, model, COUNT(*) AS occurrences
FROM bookings
GROUP BY customer_phone, model     -- group by the columns that DEFINE a duplicate
HAVING COUNT(*) > 1;               -- HAVING filters GROUPS; WHERE cannot see COUNT(*)


-- See the full duplicate ROWS, not just the counts
SELECT * FROM bookings
WHERE (customer_phone, model) IN (
    SELECT customer_phone, model FROM bookings
    GROUP BY customer_phone, model HAVING COUNT(*) > 1
)
ORDER BY customer_phone, model, created_at;


-- ============ REMOVE duplicates, keeping the OLDEST (lowest id) ============

-- Method 1: ROW_NUMBER — the modern, safest approach
WITH ranked AS (
    SELECT id,
           ROW_NUMBER() OVER (
               PARTITION BY customer_phone, model   -- restart numbering per duplicate group
               ORDER BY created_at ASC              -- ASC keeps the oldest; DESC would keep the newest
           ) AS rn
    FROM bookings
)
DELETE FROM bookings
WHERE id IN (SELECT id FROM ranked WHERE rn > 1);   -- rn=1 is the keeper; delete the rest


-- Method 2: self-join (works on older MySQL)
DELETE b1 FROM bookings b1
INNER JOIN bookings b2
  ON b1.customer_phone = b2.customer_phone
 AND b1.model = b2.model
 AND b1.id > b2.id;                                 -- delete the higher id, keep the lowest


-- Method 3: MIN(id) subquery
DELETE FROM bookings
WHERE id NOT IN (
    SELECT MIN(id) FROM bookings GROUP BY customer_phone, model
);
-- ⚠️ MySQL rejects modifying a table you're selecting from — wrap it: SELECT * FROM (...) AS t


-- ============ PREVENT them recurring — the real fix ============
ALTER TABLE bookings
ADD CONSTRAINT uq_booking UNIQUE (customer_phone, model, booking_date);
```

**Say this — the tester's framing, which is the strong answer**

> "I'd separate the query from the judgement. The query is straightforward; the important questions are:
>
> **First, define 'duplicate.'** Is a customer booking the same model twice actually invalid? In our business, one customer legitimately books two vehicles — one for themselves, one for a family member. So a naive dedupe on `(phone, model)` would delete real bookings. **I always confirm the business key before writing the DELETE.**
>
> **Second, always `SELECT` before you `DELETE`.** Run the query as a SELECT, review the rows, then convert it. I've seen a dedupe script remove valid records because the partition columns were wrong.
>
> **Third, the fix is a constraint, not a script.** If duplicates keep appearing, the root cause is missing validation — usually double form submission, or a retry after a timeout that succeeded server-side. Cleaning the data without adding the UNIQUE constraint means doing it again next month. That's the answer I'd give a dev lead."

---

## Q94. Write a query using GROUP BY and HAVING 🔴 **P0** `[L1]` ⏱ **60 sec**

```sql
-- Dealers with more than 10 bookings and average booking value above ₹20,000, in 2026
SELECT
    d.city,
    d.dealer_id,
    COUNT(b.id)                          AS total_bookings,
    SUM(b.booking_amount)                AS total_revenue,
    ROUND(AVG(b.booking_amount), 2)      AS avg_booking_value,
    MAX(b.booking_amount)                AS highest_booking
FROM bookings b
INNER JOIN dealers d ON b.dealer_id = d.dealer_id
WHERE b.booking_date >= '2026-01-01'          -- WHERE filters ROWS, before grouping
  AND b.status = 'CONFIRMED'
GROUP BY d.city, d.dealer_id                  -- every non-aggregated SELECT column must appear here
HAVING COUNT(b.id) > 10                       -- HAVING filters GROUPS, after grouping
   AND AVG(b.booking_amount) > 20000
ORDER BY total_revenue DESC
LIMIT 10;
```

**Execution order — say this, it's the real answer**

```
FROM → JOIN → WHERE → GROUP BY → HAVING → SELECT → DISTINCT → ORDER BY → LIMIT
```

> "This order explains two things people find confusing.
>
> **Why `WHERE` can't use an aggregate:** `WHERE` runs *before* `GROUP BY`, so `COUNT(*)` doesn't exist yet. `HAVING` runs after, so it can.
>
> **Why you can't use a SELECT alias in `WHERE`, but can in `ORDER BY`:** `SELECT` runs after `WHERE` but before `ORDER BY`. So `WHERE avg_booking_value > 20000` fails, while `ORDER BY total_revenue` works.
>
> **Performance point:** put every filter you can in `WHERE` rather than `HAVING`. `WHERE` reduces the rows before the expensive grouping; `HAVING` filters after the work is already done."

| | WHERE | HAVING |
|---|---|---|
| Filters | Individual rows | Grouped results |
| Runs | Before GROUP BY | After GROUP BY |
| Aggregates | ❌ Cannot use | ✅ Can use |
| Needs GROUP BY | No | Effectively yes |

---

## Q95. Primary key vs Foreign key 🔴 **P0** `[L1]` ⏱ **45 sec** — *from your L1 list, Q11*

| | Primary Key | Foreign Key |
|---|---|---|
| **Purpose** | Uniquely identifies each row | Links to a PK in another (or the same) table |
| **NULL allowed** | ❌ Never | ✅ Yes (means "no relationship") |
| **Duplicates** | ❌ No | ✅ Yes (many bookings → one dealer) |
| **Count per table** | Exactly one | Many |
| **Index** | Auto-created (clustered) | Not automatic — **should be added manually** |
| **Enforces** | Entity integrity | **Referential** integrity |

```sql
CREATE TABLE dealers (
    dealer_id   VARCHAR(10) PRIMARY KEY,          -- unique, NOT NULL, auto-indexed
    city        VARCHAR(50) NOT NULL
);

CREATE TABLE bookings (
    booking_id  INT AUTO_INCREMENT PRIMARY KEY,
    dealer_id   VARCHAR(10),                       -- can be NULL = not yet assigned
    model       VARCHAR(50) NOT NULL,

    CONSTRAINT fk_dealer FOREIGN KEY (dealer_id)
        REFERENCES dealers(dealer_id)
        ON DELETE RESTRICT                         -- block deleting a dealer who has bookings
        ON UPDATE CASCADE,                         -- if dealer_id changes, update bookings too

    UNIQUE KEY uq_booking (dealer_id, model, booking_date)
);

CREATE INDEX idx_bookings_dealer ON bookings(dealer_id);   -- FKs are NOT auto-indexed; joins need this
```

**The tester's angle — this is what earns the mark**

> "What I actually test around keys is **referential integrity behaviour**, because that's where real defects live:
>
> - Can I create a booking with a `dealer_id` that doesn't exist? Should fail — if it succeeds, the FK constraint is missing in that environment. I've found exactly that: the constraint existed in UAT but not in QA.
> - What happens when a dealer with active bookings is deleted? `ON DELETE RESTRICT` should block it. If it's `CASCADE`, deleting one dealer silently destroys their booking history — a data-loss defect.
> - Does the API return a clean **409 Conflict** when the constraint fires, or does it leak a raw SQL error with a 500? Leaking the constraint name is also an information-disclosure issue.
>
> **Composite key vs candidate key vs unique key**, since it's a common follow-up: a *composite* key is a PK made of multiple columns; a *candidate* key is any column set that *could* be the PK; a *unique* key enforces uniqueness but **allows one NULL** and isn't the row's identifier."

---

## Q96. Other SQL you should know 🟠 **P1** `[L1] [L2]` ⏱ **60 sec**

**DELETE vs TRUNCATE vs DROP — asked constantly**

| | DELETE | TRUNCATE | DROP |
|---|---|---|---|
| **Type** | DML | DDL | DDL |
| **Removes** | Selected rows | All rows | Table + structure |
| **WHERE clause** | ✅ | ❌ | ❌ |
| **Rollback** | ✅ Yes | ❌ Usually not | ❌ No |
| **Speed** | Slow (row by row, logged) | Fast (deallocates pages) | Fast |
| **Resets AUTO_INCREMENT** | ❌ No | ✅ Yes | N/A |
| **Fires triggers** | ✅ | ❌ | ❌ |

**Useful for a tester**

```sql
-- NULL handling: NULL is never equal to anything, not even itself
SELECT * FROM bookings WHERE dealer_id IS NULL;          -- correct
-- WHERE dealer_id = NULL  →  always returns zero rows, silently. Classic bug.

COALESCE(discount, 0)          -- first non-NULL value — essential in calculations
NULLIF(a, b)                   -- NULL if a = b, else a — guards divide-by-zero

-- Aggregates ignore NULLs — a real source of wrong reports
SELECT COUNT(*), COUNT(dealer_id) FROM bookings;   -- these differ if any dealer_id is NULL

-- CASE for conditional logic
SELECT model,
       CASE WHEN booking_amount > 50000 THEN 'Premium'
            WHEN booking_amount > 25000 THEN 'Standard'
            ELSE 'Basic' END AS tier
FROM bookings;

-- Date filtering — the pattern that avoids missing rows
SELECT * FROM bookings
WHERE booking_date >= '2026-07-01' AND booking_date < '2026-08-01';
-- Better than BETWEEN with a DATETIME column: BETWEEN '2026-07-01' AND '2026-07-31'
-- silently excludes everything on 31 July after midnight. A real defect I've found in a report.
```

> **Say this:** *"The NULL and date-boundary issues above are two of the most common causes of wrong numbers in reports, and both are invisible — the query runs fine and returns plausible data. As a tester I specifically check report totals against a manually-verified subset for exactly this reason."*


---
---

# Part 9 — Manual QA · STLC · Test Design Techniques

> **Your e-commerce scenario block, re-mapped to the automobile domain.** The mapping is almost one-to-one, which is convenient:
>
> | Original (e-commerce) | AutoConnect equivalent |
> |---|---|
> | Cart quantity limits | Accessory quantity / booking quantity limits |
> | Tiered discounts (Buy 2 Get 1) | Stacked offers (exchange bonus + corporate + festive) |
> | Multi-vendor checkout | Multi-dealer booking |
> | Configurable attributes (size, colour) | Variant / colour / accessory combinations |
> | Promo code rules | Offer/scheme rules |
> | Seasonal sale | Festive campaign (Navratri/Diwali booking drive) |
> | Loyalty points | Service loyalty programme |
> | Payment gateway | Booking amount payment |
>
> **Say the mapping out loud if they ask an e-commerce question** — "we have the same pattern in automotive, where…" — it shows transferable thinking.

---

## Q97. How do you align STLC when the platform pushes weekly releases? 🔴 **P0** `[L2] [MR]` ⏱ **90 sec**

**Say this — name the STLC phases, then explain the compression**

> "The STLC phases are requirement analysis, test planning, test case design, environment setup, test execution and closure. In a weekly release cadence you can't run them sequentially — a two-week sequential cycle simply doesn't fit into a one-week release. So we **overlap and shrink** them rather than skip them. Five things we do:
>
> **1. Shift left — analysis happens in grooming, not after.** I'm in refinement asking the clarifying questions before a line of code exists. For a pricing story: which states, can offers stack, what if two apply. Ambiguity found in grooming costs minutes; found in UAT it costs a release.
>
> **2. Risk-based scope instead of full regression.** We can't run 420 tests weekly and still test the new feature. So the weekly release gets: the 40-test smoke pack, plus the regression tests in the **impacted areas** identified by impact analysis, plus the new feature's tests. Full regression runs nightly regardless, so it's not that full coverage disappears — it's decoupled from the release gate.
>
> **3. Automation is the release gate, not manual regression.** Manual regression can't be compressed to a week. Automated regression can, because it's 2.5 hours unattended. That's what makes weekly releases possible at all.
>
> **4. Feature flags.** Ship code dark, enable it when QA passes. That decouples 'deployed' from 'released' and removes the all-or-nothing release-night pressure.
>
> **5. Continuous test design.** Test cases are written *during* development, not after. By the time the build lands I'm executing, not designing.
>
> **What I explicitly do *not* compress:** the entry criteria. A build with a broken smoke pack doesn't enter the cycle — testing an unstable build wastes the little time we have. That's the boundary I hold."

---

## Q98. Share a scenario where missing impact analysis caused a post-release failure 🟠 **P1** `[L2] [MR]` ⏱ **2 min`

**Why they ask.** They want a **real story with a process outcome**, not a definition. Use STAR: Situation, Task, Action, Result.

**Say this** *(adapt to your real incident — this is the shape)*

> **Situation.** We shipped a change to the offer engine — adding a corporate-discount scheme for a specific employer group. The change touched the offer-calculation service. It was scoped as a small, isolated addition, so the testing focused on the new corporate discount, which worked correctly.
>
> **What went wrong.** Two days after release, the dealer team reported that bookings with an **exchange bonus** were showing the wrong on-road price. The new corporate scheme had changed the *order* in which offers were applied in the shared calculation method, and the exchange bonus was now being applied to the post-discount value instead of the ex-showroom value. Not a huge discrepancy, but a wrong price on a legally-disclosed on-road figure is a serious problem for an automotive client.
>
> **Root cause.** Not a coding error — a **missing impact analysis**. Nobody asked "what else calls this method?" The change was reviewed as 'add a new scheme' rather than 'modify shared calculation logic'. Our regression selection was based on the *feature area* (corporate discounts) rather than the *code area* (the offer engine), so the exchange-bonus tests weren't run.
>
> **Action.** I traced it by comparing the offer-engine API response before and after the release for an exchange-bonus configuration, which isolated it in about an hour. We hotfixed within a day and reconciled the affected bookings with the dealer team.
>
> **Result — the process changes, which is the real answer:**
> 1. **A dependency map for shared services.** The offer engine, pricing service and tax calculator now have documented consumers. A change to any of them triggers the full regression pack for every consumer, not just the requesting feature.
> 2. **Impact analysis became a mandatory field** in the story template. The developer states which shared components are touched; I use that to select regression scope. It's one sentence in the ticket, and it's caught two similar situations since.
> 3. **A cross-offer test matrix.** We had tests for each offer individually but almost none for *combinations*, which is where the bug lived. I added a pairwise combination suite.
>
> **What I took from it personally:** I was testing the *requirement* rather than the *change*. Those aren't the same thing, and the gap between them is exactly where regression defects live."

> **Why this answer works:** a specific technical root cause, honest ownership of the QA gap, and three concrete process improvements. That last part is what managerial rounds are scoring.

---

## Q99. How do you ensure proper QA sign-off during rapid rollouts? 🟠 **P1** `[MR]` ⏱ **75 sec**

**Say this — sign-off is a defined decision, not a feeling**

> "For me sign-off isn't 'I feel okay about it' — it's a documented statement against defined criteria. Five components:
>
> **1. Exit criteria agreed before the cycle starts**, not negotiated on release night. Ours: 100% of planned test cases executed, zero open Critical or High defects, all Medium defects either fixed or explicitly accepted by the product owner with a rationale, smoke and regression suites green, and API contract tests passing.
>
> **2. A test summary report** with the actual numbers: cases planned versus executed, pass/fail counts, defects by severity, and — importantly — **what was *not* tested and why**. Coverage gaps stated explicitly are far more useful than an implied 'everything's fine.'
>
> **3. Known-issues list with risk assessment.** I don't block a release for a cosmetic issue, but I document it with severity, user impact and a workaround so the decision is informed. This is the part that protects everyone: the business can accept a risk, but it can't accept a risk it doesn't know about.
>
> **4. Sign-off is conditional and explicit.** I'll write 'signed off for the configurator and pricing modules; the accessory-recommendation feature is untested due to environment unavailability and is behind a feature flag.' That's honest and actionable, where a blanket sign-off would be a lie.
>
> **5. The escalation path.** If exit criteria aren't met and the business still wants to ship, that's a legitimate business decision — but it's *their* decision, made in writing, not mine made silently. I state the risk clearly and let the product owner accept it.
>
> The one thing I won't do is sign off on something I haven't tested. I'll happily sign off on a smaller scope, flag the gap, and let the business decide. **Reducing the scope of the sign-off is always available; falsifying it isn't.**"

---

## Q100. How do you write good test cases? What makes one effective? 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Say this — seven attributes**

> "An effective test case has seven properties:
>
> **1. Traceable to a requirement.** Every case links to a story or acceptance criterion. A case that traces to nothing is either untested scope or scope creep.
>
> **2. One clear objective.** 'Verify on-road price includes state road tax' — not 'verify the configurator'. A case testing five things gives an ambiguous failure.
>
> **3. Independent.** It shouldn't depend on another case having run first. Dependent cases mean one early failure cascades into twenty misleading ones, and they can't be run in parallel or in isolation.
>
> **4. Explicit preconditions and test data.** 'Dealer DLR-MH-014 is active, Maharashtra tax config loaded, vehicle in stock.' Vague preconditions produce unreproducible results.
>
> **5. Unambiguous steps with a specific expected result.** Not 'price should be correct' — 'on-road price displays ₹12,08,900 matching the formula ex-showroom + RTO + insurance + accessories − offers'. **If two testers can read the case and disagree on whether it passed, it's not a test case.** That's my acid test.
>
> **6. Right level of detail for the audience.** A detailed step-by-step case for a new team member; a concise checklist-style case for a familiar exploratory area. Over-specifying wastes maintenance effort.
>
> **7. Maintainable.** No hardcoded dates that expire, no dependency on a specific record ID that gets cleaned up.
>
> **And the effectiveness test that actually matters:** a test case earns its place by its probability of finding a defect. A case verifying that a static label reads 'Variant' costs maintenance forever and will never fail meaningfully. So I weight coverage toward boundaries, negative paths, and interactions between features — because that's where defects actually cluster."

**Follow-up trap:** *"How do you decide how many test cases are enough?"*
> "Not by count — by coverage against risk. I map cases to requirements and check every acceptance criterion has at least one positive and one negative case, then add boundary and combination cases weighted by business risk. Then I check the reverse direction: is any case *not* mapped to a requirement? That either finds redundant cases or an undocumented requirement. Both are worth knowing."

---

## Q101. Test Plan vs Test Strategy — components of each 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

| | Test Strategy | Test Plan |
|---|---|---|
| **Level** | Organisation / programme | Project / release |
| **Scope** | High-level approach, long-lived | Specific, per-project |
| **Owner** | QA Manager / Test Architect | Test Lead |
| **Changes** | Rarely | Per project or release |
| **Answers** | *How do we test, as an organisation?* | *What, who, when, on this project?* |
| **Content** | Standards, tools, levels, automation approach, risk policy | Scope, schedule, resources, deliverables, criteria |

**Test Plan components — the IEEE 829 structure, which is what they're checking**

> "1. **Test plan identifier** — version, so it's traceable
> 2. **Introduction and objectives** — what we're testing and why
> 3. **Scope** — explicitly **in scope and out of scope**. The out-of-scope list is the most important section and the most often omitted; it's what prevents an argument later.
> 4. **Test items** — the builds, modules and versions under test
> 5. **Features to be tested / not tested** — with the reason for exclusions
> 6. **Approach** — levels, types and techniques to be used
> 7. **Entry and exit criteria** — plus suspension and resumption criteria
> 8. **Deliverables** — cases, defect reports, summary report, automation scripts
> 9. **Environment** — hardware, software, test data, integrations and stubs
> 10. **Roles and responsibilities** — named people
> 11. **Schedule and estimation** — with effort
> 12. **Risks and mitigations** — the section that earns its keep
> 13. **Approvals** — who signs off"

**Say this to close**

> "In practice, on an Agile project we don't write a 30-page test plan per sprint — that would be waste. We have a **living strategy document** at the programme level covering tools, automation approach and standards, and then a lightweight one-page plan per release covering scope, risks and exit criteria.
>
> The two sections I never skip, whatever the format: **out-of-scope** and **risks**. Those are the ones that protect the team when something goes wrong, because they turn an unspoken assumption into a documented, agreed decision."

---

## Q102. Smoke vs Sanity testing 🔴 **P0** `[L1]` ⏱ **60 sec** — *appears 2×*

| | Smoke | Sanity |
|---|---|---|
| **Purpose** | Is the build **stable enough to test**? | Does this **specific change** work? |
| **Scope** | **Wide and shallow** — all major modules | **Narrow and deep** — the changed area |
| **When** | On every new build, before any testing | After a bug fix or minor change |
| **Documented?** | Usually scripted and automated | Often unscripted/exploratory |
| **Also called** | Build verification testing (BVT) | Subset of regression |
| **Automated?** | ✅ Almost always | Sometimes |
| **Duration** | ~10 min | Varies |

**Say this — the analogy plus a real example**

> "The distinction is **breadth versus depth**. Smoke is wide and shallow — can I log in, does the configurator load, does the price render, can I reach the payment page. It touches every critical path once with no depth, and it answers one question: is this build worth spending a day testing?
>
> Sanity is narrow and deep — the offer calculation was fixed, so I verify that offer thoroughly plus the things immediately around it.
>
> **A concrete example from my project:** a build arrives where the pricing service fails to start. Smoke catches it in 90 seconds and we **reject the build** — that's a real gate, not a formality. We reject roughly one build a fortnight this way, and each rejection saves a day of a QA team testing a broken environment.
>
> Then, after a fix to the exchange-bonus calculation, I run sanity: that specific offer across several variants and states, plus the offers that share the calculation path. Deep on the change, not wide.
>
> The relationship: **smoke → sanity → regression.** Smoke says the build is testable, sanity says the change works, regression says nothing else broke."

---

## Q103. Regression vs Retesting 🔴 **P0** `[L1]` ⏱ **60 sec** — *appears 2×*

| | Retesting | Regression |
|---|---|---|
| **Purpose** | Confirm a **specific defect is fixed** | Confirm the fix **broke nothing else** |
| **Scope** | The failed case(s) only | Related and unrelated existing features |
| **Test cases** | The **exact same** case that failed | Existing passing cases |
| **Needs a defect?** | ✅ Yes — always defect-driven | ❌ No — runs after any change |
| **Automatable?** | Not usually worth it | ✅ **The prime automation candidate** |
| **Priority** | Higher — do it first | After retest passes |
| **Uses same data?** | Yes, the exact reproduction data | Different/broader data |

**Say this**

> "They're sequential, not alternatives. **Retesting** is verifying the specific defect is gone — I re-run the exact failed case with the exact same data on the fixed build. **Regression** is verifying the fix didn't break anything else.
>
> Order matters: **retest first.** If the fix doesn't work, running a 3-hour regression suite is wasted effort.
>
> **Why regression is the automation target and retesting usually isn't:** regression runs the same tests on every build, forever — that's maximum ROI. Retesting is often a one-off for a single defect, so writing a script for it may cost more than the manual check. Though if a defect recurs, I do automate it — a regression test derived from a real production defect is one of the highest-value tests you can write, because you have proof that path can break.
>
> **The example from my project:** the exchange-bonus rounding defect. Retest = that one configuration, confirmed fixed. Regression = all other offer types plus the pricing suite, confirming the fix didn't shift another calculation. And I added the original failing configuration to the permanent regression pack, so it can never silently return."

---

## Q104. Test design techniques — overview 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Say this — black-box, white-box and experience-based**

### Black-box techniques

| Technique | What it does | My use |
|---|---|---|
| **Equivalence Partitioning (ECP)** | Divide input into classes that behave the same; test one value per class | Accessory quantity: 0 / 1–5 / 6+ |
| **Boundary Value Analysis (BVA)** | Test at and around class boundaries | Quantity 0, 1, 5, 6 |
| **Decision Table** | Enumerate combinations of conditions and their outcomes | Offer eligibility rules |
| **State Transition** | Model states and valid/invalid transitions | Booking lifecycle |
| **Use Case Testing** | Test end-to-end business flows | Configure → book → pay → deliver |
| **Pairwise / Orthogonal Array** | Cover all *pairs* of parameter values with a fraction of the combinations | Variant × colour × state × accessory |
| **Error Guessing** | Experience-driven guesses at likely failures | Special characters in name fields |

### White-box techniques
Statement coverage, branch/decision coverage, path coverage, condition coverage — used by developers in unit tests; I use the coverage *report* to find untested branches rather than writing white-box tests myself.

### Experience-based
Exploratory testing, error guessing, checklist-based.

**Say this to close**

> "In practice I combine three: **ECP plus BVA** for every input field, because that's the highest defect yield per case; **decision tables** for business rules with multiple conditions; and **pairwise** wherever there's combinatorial explosion — which in our configurator is constantly.
>
> The reason I lead with ECP and BVA is empirical: defects cluster at boundaries. Off-by-one errors, inclusive-versus-exclusive comparisons, and the zero and null cases account for a large share of what I find. Testing the middle of a valid range almost never finds anything."

---

## Q105. How would you apply boundary value analysis for quantity limits? 🟠 **P1** `[L2]` ⏱ **75 sec**

*Requirement: a customer may add 1 to 5 units of any accessory; booking quantity is 1 to 3 vehicles.*

**Say this — partitions first, then boundaries**

> "First equivalence partitioning to establish the classes, then BVA on the boundaries between them.
>
> **Partitions for accessory quantity (valid 1–5):**
> - Invalid low: ≤ 0
> - **Valid: 1–5**
> - Invalid high: ≥ 6
>
> **BVA test values** — using the standard three-point approach at each boundary:
>
> | Value | Partition | Expected | Why this value |
> |---|---|---|---|
> | **-1** | Invalid low | Rejected | Negative — must not be accepted or treated as 0 |
> | **0** | Invalid low | Rejected, or 'remove item' if that's the spec | **The most defect-prone value in any range** |
> | **1** | **Lower boundary — valid** | Accepted | Off-by-one check: is the comparison `> 1` or `>= 1`? |
> | **2** | Valid, mid | Accepted | Sanity within range |
> | **4** | Valid | Accepted | Just below the upper boundary |
> | **5** | **Upper boundary — valid** | Accepted | Off-by-one: is it `< 5` or `<= 5`? Classic bug site |
> | **6** | Invalid high | Rejected with a clear message | First invalid value |
> | **100** | Invalid high | Rejected | Well beyond, checks there's no second threshold |
>
> **Then the non-numeric cases**, which BVA doesn't cover but which absolutely need testing:
> - Empty field, blank space
> - Decimal: `2.5` — should be rejected, not silently truncated to 2 or rounded to 3
> - Negative zero, `-0`
> - Alphabetic: `abc`
> - Special characters, and `1e3` in scientific notation
> - Leading zeros: `005` — should be treated as 5
> - Extremely large: `999999999999` — must not cause an integer overflow. **This is the one people miss, and it's a real class of defect** — an overflow can wrap to a negative quantity and produce a negative price.
>
> **And the crucial second layer:** every one of these must be tested at the **API level, not just the UI.** The UI probably has a max attribute on the number input that prevents typing 6. That doesn't mean the server validates it. I've found exactly this — the UI blocked quantity 6 but the API happily accepted 500, so a direct API call created a booking for 500 accessories. **Client-side validation is UX; server-side validation is security.**
>
> **Interaction boundaries too:** 5 units of accessory A *plus* 5 of accessory B — is there a *total* items cap? And does quantity 5 exceed available stock? A per-item limit and an inventory limit are two separate rules that can conflict."

---

## Q106. Which design technique validates tiered discount rules? 🟠 **P1** `[L2]` ⏱ **75 sec**

*Automotive equivalent of "Buy 2 Get 1": stacked offers — exchange bonus + corporate discount + festive scheme.*

**Say this — decision table, and explain why**

> "**Decision table testing**, because the behaviour depends on a *combination* of conditions rather than a single input. BVA is for ranges; decision tables are for rule interactions. And offer stacking is exactly a rule-interaction problem.
>
> Our conditions: has an exchange vehicle, is a corporate-scheme employee, booking falls in a festive window, and is the variant eligible for the scheme.
>
> **The decision table:**
>
> | # | Exchange | Corporate | Festive window | Variant eligible | Expected outcome |
> |---|---|---|---|---|---|
> | 1 | Y | Y | Y | Y | Which offers stack? **Per business rule** — usually the highest single, or a defined combination |
> | 2 | Y | N | Y | Y | Exchange + festive applied |
> | 3 | N | Y | Y | Y | Corporate + festive |
> | 4 | Y | Y | N | Y | Exchange + corporate |
> | 5 | Y | Y | Y | **N** | No scheme applies regardless of eligibility — the override case |
> | 6 | N | N | N | Y | Base price, no discount |
> | 7 | N | N | Y | Y | Festive only |
> | 8 | Y | N | N | Y | Exchange only |
>
> With 4 binary conditions there are 16 combinations. I wouldn't test all 16 blindly — I'd collapse the ones where a single condition dominates the outcome. Row 5 is the key insight: if variant eligibility is N, the other three conditions are irrelevant, so that collapses 8 combinations into one test.
>
> **The questions I'd ask before writing any of this** — and this is the more valuable part of the answer:
>
> 1. **Do offers stack, or is only the best one applied?** This is the single most important ambiguity, and it's frequently unspecified. 'Customer gets ₹40,000 off' versus 'customer gets ₹75,000 off' is a large commercial difference.
> 2. **If they stack, in what order?** Sequential percentage discounts are order-dependent: 10% then ₹20,000 off ≠ ₹20,000 off then 10%. **This is exactly where our real defect was.**
> 3. **Is there a floor?** Can stacked offers take the price below a minimum, or below cost? A negative or absurdly low price is a genuine commercial risk.
> 4. **What's the precedence when two offers conflict?**
>
> **And I'd add pairwise on top**, because eligibility interacts with variant, state and dealer. Full combinatorial coverage of offer × variant × state is thousands of cases; pairwise gets the interaction coverage in a few dozen.
>
> **The highest-risk test, which I'd flag explicitly:** verifying that stacked offers cannot produce a price below the floor. That's the one where a bug costs the client actual money on every affected booking."

---

## Q107. How do you design minimal test sets for multi-dealer booking? 🟠 **P1** `[L2]` ⏱ **75 sec**

**Say this — pairwise plus risk weighting**

> "Two techniques together: **pairwise (orthogonal array) testing** to get combination coverage cheaply, then **risk-based weighting** to decide what gets extra depth beyond that.
>
> **The problem.** Multi-dealer booking has independent dimensions: dealer type (authorised / franchise / OEM-direct), state (different tax rules), payment method (card / netbanking / UPI / finance), vehicle availability (in-stock / factory-order), and offer applicability. Even conservatively that's 3 × 5 × 4 × 2 × 2 = 240 combinations. At 15 minutes each that's 60 hours — not viable weekly.
>
> **Pairwise reduces it.** The empirical basis: most defects are triggered by a single parameter or by an interaction between **two** parameters, not by an obscure five-way interaction. Pairwise covers every *pair* of values at least once, which typically brings 240 combinations down to about 20–25 test cases while retaining the large majority of the defect-detection power. I use a tool — PICT or ACTS — to generate the set rather than constructing it by hand.
>
> **Then I add back deliberately**, because pairwise is a floor, not a ceiling:
>
> 1. **The high-value happy path in full** — authorised dealer, in-stock, card payment, most common state. That flow carries the most revenue, so it gets full depth regardless of what pairwise says.
> 2. **Known-risky combinations**, even if pairwise already covered the pairs. Finance payment plus factory-order is our most defect-prone combination historically, because it involves two external systems and a delayed delivery date. Historical defect data beats a generated matrix.
> 3. **All negative paths** — payment failure, stock depleted mid-booking, dealer deactivated mid-booking. These aren't parameter combinations, they're separate scenarios.
> 4. **The genuinely multi-dealer scenarios**, which are the actual point of the feature: the same vehicle available at two dealers and the customer switching; a booking transferred between dealers; and the concurrency case — two customers booking the last unit at the same dealer simultaneously. **That race condition is the highest-risk test in the whole set** and no combinatorial technique would surface it.
>
> So: about 25 pairwise cases plus roughly 10 targeted high-risk cases. Around 35 instead of 240, with better coverage of what actually matters — because the 10 targeted ones are chosen by risk, not by an algorithm."

---

## Q108. How do you handle test cases for products with configurable attributes? 🟠 **P1** `[L2]` ⏱ **75 sec**

*Our case: model × variant × colour × accessories — the heart of the configurator.*

**Say this — layer the testing by what each layer proves**

> "This is the core testing challenge of my project, so I have a real answer rather than a theoretical one. Six models × 5 variants × 8 colours × 12 optional accessories is astronomically many combinations if you treat it as one problem. So I decompose it into four layers:
>
> **Layer 1 — Rules, not combinations.** Most of the behaviour is rule-driven, and rules are far fewer than combinations:
> - Not every colour is available on every variant — base variants often have fewer colours
> - Some accessories are variant-restricted (a sunroof accessory on a variant without a sunroof)
> - Some accessories are mutually exclusive (two different alloy wheel sets)
> - Some are bundled (a package that includes three items)
>
> So I test the **rules**: 'an ineligible colour is not offered for the base variant', 'selecting alloy set A disables alloy set B'. That's a dozen tests covering behaviour that would otherwise need hundreds of combinations.
>
> **Layer 2 — Pairwise for the combinations that remain.** After rule-based tests, use pairwise on variant × colour × accessory-category to catch interaction defects economically.
>
> **Layer 3 — Data-driven at the API layer for price arithmetic.** The one thing that genuinely needs breadth is the price calculation, because every combination produces a different number. But that's a *calculation* test, not a UI test. So I test it against the pricing API with combinations from a spreadsheet: 200+ combinations in about three minutes, versus hours through the UI. The UI then only needs to prove it *displays* what the API returns.
>
> **Layer 4 — Targeted UI tests for the interaction behaviour**, which is what actually breaks:
> - Change variant *after* selecting colour and accessories — what persists and what resets? **This is our most defect-prone behaviour.** Real bug: changing variant kept an accessory that wasn't valid for the new variant, so the price included an unavailable item.
> - Browser back/forward — is the configuration preserved?
> - Deep link into a pre-configured URL
> - Refresh mid-configuration
> - Two tabs configuring different vehicles simultaneously
>
> **The summary I'd give:** don't try to test configurations — test the **rules** that govern them, the **calculation** in bulk at the API layer, and the **state transitions** between configurations in the UI. Those three cover the space; enumerating combinations never will."

---

## Q109. Which testing types are most crucial for festive campaign workflows? 🟠 **P1** `[L2]` ⏱ **75 sec**

*Automotive equivalent of seasonal sale: a Navratri/Diwali booking campaign with special schemes.*

**Say this — ranked, with justification**

> "I'd rank them by what fails during a campaign, because campaign failures have a specific pattern:
>
> **1. Performance and load testing — the highest priority by a wide margin.** A festive campaign is a deliberate traffic spike. Our normal load might be a few hundred concurrent users; on campaign launch day it can be many times that. What breaks under load isn't the feature, it's the infrastructure: database connection pool exhaustion, the pricing service timing out, the payment gateway rate-limiting us. And these failures happen *at the moment of maximum business impact*. So load testing against realistic peak-plus-headroom is non-negotiable, and it must happen **before** launch, not during.
>
> **2. Functional testing of the scheme rules.** Does the festive offer apply to the right variants, in the right window, stacking correctly with existing offers? Campaign schemes are built fast under commercial pressure, which makes them defect-prone.
>
> **3. Date and time boundary testing — the most underestimated one.** A campaign has a start and end timestamp, and this is where I find the most defects:
> - Exactly at the start time — is the boundary inclusive?
> - Exactly at the end — a booking started at 23:59:50 and submitted at 00:00:05: does the offer still apply? **What the customer was *shown* versus what they're *charged* is a genuine dispute risk.**
> - **Timezone handling** — is the cut-off server time, IST, or the user's local time? A dealer in a different timezone seeing a different campaign state is a real bug.
> - Does it auto-expire, or does someone have to switch it off manually? Manual expiry means it will be forgotten.
>
> **4. Regression on the non-campaign paths.** The campaign added logic to the shared offer engine, so every *existing* offer must still work. **This is precisely the impact-analysis lesson from Q98.**
>
> **5. Concurrency and inventory integrity.** High traffic on limited stock: can two customers book the last unit? Overselling during a campaign is a commercial and reputational problem, and race conditions only manifest under concurrency — so this needs a load test, not a functional test.
>
> **6. Security.** Campaign codes get shared publicly. Can a code be used beyond its limit? Can it be applied to an ineligible variant by manipulating the API request? Can it be brute-forced?
>
> **7. UAT with the business.** The marketing team must confirm the offer displays as they intended — the wording, terms and price presentation. A technically correct offer with misleading copy is still a problem, especially on a price disclosure.
>
> **8. Rollback readiness.** Can the campaign be switched off instantly if the discount is wrong? A feature flag on the campaign is the single most valuable safety measure, and I test that the *off* switch works — not just the on switch."

---

## Q110. How do you approach regression testing after offer/promo rule changes? 🟠 **P1** `[L2]` ⏱ **75 sec**

**Say this — risk-based selection, not "run everything"**

> "'Run the whole suite' isn't a strategy, it's an abdication — and it doesn't fit a weekly release anyway. My approach is four steps:
>
> **1. Impact analysis on the code, not just the feature.** I ask the developer which components changed. For an offer rule that's typically the offer engine, the pricing service and possibly the tax calculator. Then I use our dependency map to find every consumer of those components. This is the direct output of the failure in Q98 — feature-based selection is what missed the exchange-bonus regression.
>
> **2. Build the regression scope in four tiers:**
> - **Tier 1 — the changed rule itself.** Full depth: eligible and ineligible cases, boundaries, and the offer's own date window.
> - **Tier 2 — every *other* offer type.** Because they share the calculation path. This is the tier everyone skips and where the defects are.
> - **Tier 3 — offer *combinations*.** Pairwise across offer types, since stacking order is where our real bug lived.
> - **Tier 4 — downstream consumers of the price.** The price flows into the booking amount, the invoice, the finance EMI calculation and the dealer's commission. A wrong price propagates, and **the invoice is the one that has legal consequences.** I always verify the price the customer is *charged* matches the price they were *shown*, not just that the display is right.
>
> **3. Automation does the breadth.** The pricing API suite runs 200+ combinations in three minutes, so Tier 2 and Tier 3 are essentially free once written. That's what makes thorough regression compatible with a weekly release — the coverage is automated, so 'more thorough' doesn't mean 'slower'.
>
> **4. Data-state regression, which people forget.** What happens to bookings created *under the old rule*? Do they retain their original price, or does a change recalculate historical bookings? Retroactively changing a confirmed booking price is a serious defect, and it's invisible to any test that only checks new bookings. I explicitly test: create a booking, change the offer rule, re-fetch the booking, and assert the price is unchanged.
>
> That last one has found a real defect, and it's the test I'm most pleased with — because nothing in the requirement asked for it."

---

## Q111. How do you perform security testing for payment gateways? 🟠 **P1** `[L2]` ⏱ **90 sec**

**Say this — and lead with the honest scope boundary**

> "I'd start with a boundary: I'm a QA engineer, not a penetration tester, and full payment security assessment needs a specialist and a PCI-DSS audit. What I own is functional security verification and making sure the obvious classes of vulnerability are checked. Being clear about that boundary is itself part of doing it responsibly.
>
> **What I do test:**
>
> **1. Amount tampering — the highest-value test.** Intercept the request between the UI and the gateway and change the booking amount from ₹25,000 to ₹1. The server must reject it. This is the single most important payment test, because it's the most directly exploitable. The correct architecture is that the amount is computed and validated **server-side** and never trusted from the client. I've verified this by replaying a modified request with REST Assured.
>
> **2. Sensitive data handling.**
> - Card details must never touch our servers — that's why the gateway form is in an iframe on their domain. I verify the card fields are genuinely in the iframe and no card data appears in our network traffic.
> - No card numbers, CVV or tokens in application logs, browser storage, or URL parameters.
> - HTTPS enforced everywhere; HTTP requests must redirect, not serve.
> - Correct security headers — HSTS, and a Content-Security-Policy that limits framing.
>
> **3. Authorisation and IDOR.** Can dealer A fetch dealer B's payment record by changing the ID in the URL? Can a customer view another customer's booking payment by incrementing an ID? **Insecure Direct Object Reference is the most common real vulnerability I find**, because it's invisible in the UI — the UI never shows you the other ID, so it's never tested unless you look for it deliberately.
>
> **4. Transaction integrity.**
> - Replay attack: resubmit a successful payment request — does it charge twice? Idempotency keys should prevent this.
> - Double submission from a double-click on the pay button.
> - Callback/webhook forgery: can I POST a fake 'payment successful' callback to our endpoint? The callback **must** be signature-verified, and I test that an unsigned or wrongly-signed callback is rejected. Accepting an unverified success callback means free vehicles.
> - What happens if payment succeeds at the gateway but our callback fails? The reconciliation path must exist, otherwise the customer is charged with no booking.
>
> **5. Session security.** Session fixation, session timeout during payment, and whether a session token is invalidated on logout.
>
> **6. Injection and input validation** on every field that reaches the payment service.
>
> **7. Error handling.** Failure messages must not leak internal detail — no stack traces, no gateway API keys in an error response, no internal hostnames.
>
> **What I escalate rather than attempt:** cryptographic implementation review, PCI-DSS compliance certification, and full penetration testing. I raise those as requiring a specialist and make sure they're scheduled, rather than pretending my functional checks cover them."

---

## Q112. At which test level would you validate payment-to-invoice integration? 🟠 **P1** `[L2]` ⏱ **60 sec**

**The four test levels**

| Level | Who | Scope |
|---|---|---|
| **Unit** | Developer | One class or method in isolation |
| **Integration** | Dev / QA | Two or more components talking to each other |
| **System** | QA | The whole application end to end |
| **Acceptance (UAT)** | Business / client | Fitness for business purpose |

**Say this — the answer is "more than one level, deliberately"**

> "Payment-to-invoice spans a boundary, so it's tested at three levels, each answering a different question — and the mistake is trying to cover it all at one level.
>
> **Integration testing is the primary level**, because the risk is in the handoff between the payment service and the invoicing service. Specifically:
> - Does a successful payment event produce exactly one invoice? Not zero, not two.
> - Do the amounts match to the paisa, including tax breakdown?
> - Does the invoice reference the correct booking and customer?
> - What happens when invoicing is **down** at the moment payment succeeds? The payment must not be lost, and there must be a retry or a reconciliation queue. **This is the highest-risk case and it's only testable at integration level with a mock**, because you can't take the real invoicing service down on demand.
> - Duplicate payment events — a webhook delivered twice must produce one invoice, not two.
>
> **System testing** verifies the end-to-end journey: the customer pays and receives a correct invoice by email with the right on-road price breakdown. That's the user-visible outcome, and it's the level where you catch a formatting or content problem in the invoice itself.
>
> **UAT** is where the **finance team** validates that the invoice is legally and fiscally correct — GST breakdown, HSN codes, the mandatory disclosure fields. **I explicitly do not own that judgement**, and saying so is important: I can verify the invoice matches the specified format, but only finance can confirm the format is compliant. Getting that wrong has regulatory consequences.
>
> **Unit level** is the developer's: the invoice-number generation logic, the tax calculation function.
>
> The general principle I'd state: **test at the lowest level that can actually detect the failure.** Amount arithmetic belongs in unit tests. The handoff and failure modes belong in integration. The user-visible outcome belongs in system. Business and legal correctness belongs in UAT. Pushing everything to end-to-end tests gives you a slow, flaky suite that's bad at finding the specific defects."

---

## Q113. How do you structure UAT for a new loyalty points system? 🟡 **P2** `[L2] [MR]` ⏱ **75 sec**

*Our case: a service loyalty programme — points earned on servicing, redeemable against future service or accessories.*

**Say this — UAT is business validation, structured in six steps**

> "The distinction that matters: system testing asks 'does it work as specified?' UAT asks 'does it do what the business actually needs?' Those diverge more often than you'd expect, and UAT exists to catch the divergence.
>
> **1. Identify the right participants.** Not QA. For a service loyalty programme: the service managers who'll administer it, dealer staff who'll explain it to customers, the finance team who own the liability, and ideally a few real customers or an internal proxy group. The most common UAT failure is running it with the wrong people — a business analyst signing off on behalf of dealers isn't UAT.
>
> **2. Business-scenario scripts, not test cases.** UAT scripts are written in business language and organised around real journeys, not features: 'a customer completes their third service and redeems accumulated points against an accessory purchase.' Participants shouldn't need to understand the system architecture to execute them.
>
> **3. Realistic data — the make-or-break factor.** Loyalty programmes are time-and-history dependent, so UAT needs customers with realistic service histories: someone with two years of visits, someone who's already redeemed, someone whose points are near expiry, someone at a tier boundary. **Fresh empty accounts will validate nothing.** I'd prepare masked production-like data specifically for this, and this is usually the longest lead-time item in UAT preparation.
>
> **4. Cover the scenarios that only the business can judge:**
> - Are the earning rates commercially correct?
> - Points expiry — is the policy right, and is the customer warned before expiry?
> - Tier transitions — what happens on upgrade *and* on downgrade? Downgrade is the emotionally sensitive one and it's usually underspecified.
> - Edge cases the business must rule on: what happens to points if a service is refunded? If a vehicle is sold to a new owner, do the points transfer? **That last one is a genuine business question with no technically correct answer** — it must be decided, not tested, and UAT is where it surfaces.
> - Points combined with an existing offer — the stacking question again.
>
> **5. Structure and criteria.** A defined window with daily triage, a single defect intake channel, severity agreed in business terms rather than technical ones, and exit criteria agreed up front: all critical business scenarios passed, no open high-severity defects, and explicit written sign-off from the service and finance leads.
>
> **6. My role during UAT.** I support rather than execute — preparing environment and data, triaging incoming issues to separate genuine defects from misunderstandings or training gaps (a large proportion are the latter), reproducing and logging real defects, and keeping a running status. I also feed UAT findings back into the automated regression suite, because a scenario the business cared enough to catch is a scenario worth protecting permanently."

---

## Q114. How do you support developers during component testing of offer logic? 🟡 **P2** `[L2]` ⏱ **60 sec**

**Say this — four concrete contributions**

> "Component or unit testing is the developer's responsibility, but QA can make it substantially more effective, and this is one of the highest-leverage things I do. Four things:
>
> **1. Supply the test cases before the code is written.** For offer logic I hand the developer my decision table — the condition combinations and expected outcomes — during grooming. They then write unit tests directly from it. This is the biggest single win: the same rules get verified at the fast, cheap layer instead of only at the slow UI layer, and defects get caught before a build even exists.
>
> **2. Provide the edge cases they wouldn't think of.** Developers naturally test the path they built. I contribute the adversarial ones: zero discount, discount exceeding the vehicle price, two conflicting offers, an offer valid for exactly one second, negative exchange value, a null customer tier. My value here is a different mindset, not more knowledge of the code.
>
> **3. Review unit-test coverage for *meaning*, not percentage.** I look at the coverage report to find untested branches — and specifically at whether the tests *assert* anything meaningful. 90% line coverage where the assertions only check 'no exception thrown' is worthless. I'd rather have 60% coverage with real assertions on the calculation.
>
> **4. Pair on the test-data setup.** Offer logic needs a customer, a vehicle, a dealer and a date context. Helping build reusable test fixtures makes unit tests cheaper for the developer to write, which means more of them get written.
>
> **Why this matters to me and not just to them:** every rule verified at unit level is a rule I don't need to verify through the UI. Our offer-engine unit tests cover the calculation combinations, so my UI tests only need to confirm the price *displays* correctly. That's how the overall suite stays fast — pushing verification down to the cheapest layer that can catch the defect. It's the test pyramid applied deliberately rather than described in a slide."

---

## Q115. Which artifacts are critical to tracking price rule coverage? 🟠 **P1** `[L2]` ⏱ **60 sec**

**Say this — five artifacts, each answering a different question**

> "**1. Requirements Traceability Matrix (RTM) — the primary one.** It maps every pricing rule to the test cases covering it. What makes it valuable is that it's readable in **both** directions: forward tells me every rule has coverage; backward tells me if any test case maps to no rule, which means either a redundant test or an undocumented requirement. Both are worth finding. For pricing specifically, the RTM is what lets me answer 'is state-specific road tax covered for all 28 states?' with evidence rather than an opinion.
>
> **2. The decision table / rule matrix itself.** For offer stacking, this *is* the coverage artifact — a grid of condition combinations against expected outcomes, with an execution status per row. It's simultaneously the design document and the coverage report, which is why I favour it for rule-heavy areas.
>
> **3. Test data matrix.** For pricing, coverage is largely a *data* question: which variant × state × offer combinations have been executed. Ours is a spreadsheet that doubles as the DataProvider source for the automated suite — so the coverage artifact and the test input are the same file, which means they can't drift apart. That's a deliberate design choice.
>
> **4. Test execution report** — per cycle, with pass/fail per rule, so coverage is tracked over time rather than as a snapshot.
>
> **5. Defect density by rule area.** Not coverage exactly, but it tells me *where to add* coverage. If 60% of pricing defects come from offer stacking, that area needs more cases regardless of what the RTM says is already covered. **Coverage tells you what you've tested; defect density tells you where you should test more.** Using only the first is how you end up with 100% coverage and defects in production.
>
> **The honest caveat:** an RTM is only as good as its maintenance. A stale RTM is actively harmful — it reports coverage that no longer exists. So I keep ours generated from test annotations where possible rather than hand-maintained, because a hand-maintained matrix always drifts."

---

## Q116. How do you maintain reusable test assets across different domains? 🟡 **P2** `[L2]` ⏱ **60 sec**

**Say this — separate what's generic from what's domain-specific**

> "The principle is layering by volatility: the more domain-specific something is, the less reusable it is, so keep them in separate layers.
>
> **Highly reusable — the framework core.** Driver management, wait wrappers, config reading, Excel and JSON utilities, reporting integration, API request specs, listeners. None of this knows anything about vehicles. In practice we package this as a **separate Maven module** — a `test-core` JAR that a second project can add as a dependency. That's the strongest form of reuse: not copy-paste, but a versioned dependency.
>
> **Partly reusable — patterns and conventions.** The page-object structure, the naming conventions, the folder layout, the decision-table approach to rule testing. These transfer as *documented practice* rather than as code. It's why I keep our conventions written down — a new project can adopt the approach in a day.
>
> **Not reusable — domain logic.** Page objects for the configurator, on-road price arithmetic, offer stacking rules, vehicle test data. These are genuinely specific and shouldn't be forced into a shared layer. Trying to generalise them produces an over-abstracted mess that serves neither project.
>
> **Cross-cutting assets that do transfer well:**
> - **Generic checklists** — every input field needs boundary, null, special-character and injection cases regardless of domain. That checklist has served me on both the dealer portal and the customer app.
> - **A common data-generation utility** — valid phone numbers, emails, PIN codes, names. Domain-agnostic and always needed.
> - **The security test checklist** — IDOR, injection, auth bypass. Applies identically to any application.
>
> **Practically, how we keep it working:** the core in its own module with semantic versioning; conventions documented in the repo README; and a rule that no domain-specific import is allowed in the core module, enforced by the package structure. Without that last rule, the core gradually acquires vehicle-specific logic and stops being reusable — which is exactly what happens to most 'shared frameworks'."

---

## Q117. Which artifact showcases QA readiness before a campaign? 🟠 **P1** `[MR]` ⏱ **60 sec**

**Say this**

> "The **Test Summary Report**, sometimes packaged as a go/no-go readiness dashboard. But the useful answer is what has to be *in* it, because a report that just says '98% pass' isn't readiness evidence — it's a number without a decision attached.
>
> A readiness report a business stakeholder can act on has six sections:
>
> **1. Scope covered — and explicitly not covered.** 'Festive offer logic, stacking with existing offers, and the booking flow are fully tested. The dealer-commission recalculation was not tested because the dealer test environment was unavailable; it is behind a feature flag.' The second half is what makes it honest and useful.
>
> **2. Execution summary** — cases planned versus executed, pass/fail, with the reason for anything not executed.
>
> **3. Open defects by severity, with business impact stated in business terms.** Not 'DEF-4412: incorrect rounding in offer display'. Instead: 'the displayed discount can be ₹1 lower than the applied discount; the customer is charged the correct amount; cosmetic, workaround none needed.' A manager can make a decision from the second version and not from the first.
>
> **4. Risk assessment with mitigations.** 'Load tested to 3× expected peak. Beyond that, the pricing service is the likely first bottleneck; the mitigation is the campaign feature flag which can be disabled in under a minute.'
>
> **5. Explicit go/no-go recommendation.** I state a recommendation with conditions: 'Recommend go, conditional on the dealer-commission flag remaining off until DEF-4415 is verified.' A report that presents data without a recommendation pushes the judgement onto someone with less information than me.
>
> **6. Rollback readiness — specific to campaigns.** Confirmation that the campaign can be switched off, and that this has been *tested*. For a time-boxed campaign this is often the single most important line in the document.
>
> **Supporting artifacts** attached rather than embedded: the RTM for coverage evidence, the automation execution report, and the performance test results.
>
> The framing I'd use: **the report's job is to let someone else make an informed decision, not to demonstrate that QA was busy.** If a stakeholder reads it and still has to ask 'so are we safe to ship?', I've written it wrong."

---

## Q118. How do you decide when to stop testing? 🔴 **P0** `[L2] [MR]` ⏱ **75 sec** — *from Image 1, Q1*

**Why they ask.** It's a judgement question with no single right answer. They're checking whether you have **criteria** or just a feeling.

**Say this — the honest opening, then the criteria**

> "The premise worth stating first: **testing is never 'complete'** — exhaustive testing is mathematically impossible for any non-trivial application. So the real question is when the remaining risk is low enough to accept, which is a business decision informed by evidence rather than a QA decision made alone.
>
> The criteria I use, in order of how much I weight them:
>
> **1. Exit criteria met** — agreed *before* the cycle, not negotiated at the end. Planned cases executed, zero open Critical/High defects, Mediums explicitly accepted by the product owner, automated suites green.
>
> **2. Defect discovery rate has flattened.** This is the most informative signal. If I found 30 defects in week one, 12 in week two and 2 in week three, the curve is telling me the productive testing in this area is done. If I'm still finding 15 a week, stopping would be irresponsible regardless of what the schedule says. **A flat defect curve is evidence; a completed test plan is only a schedule.**
>
> **3. Coverage against risk, not against count.** Are the high-risk areas covered to depth? I'd rather stop with 80% of cases executed but every critical path covered, than 100% executed where the coverage was evenly spread across trivial and critical features.
>
> **4. Time and cost boundaries** — the honest reality. The release date exists. This isn't an ideal criterion, but pretending it isn't a factor would be dishonest. What I control is that when we stop for schedule reasons, the *residual risk is documented*, so it's an informed decision rather than a hidden one.
>
> **5. Diminishing returns.** When each additional hour is producing cosmetic findings in low-traffic areas, that hour is better spent elsewhere — often on automating what we just tested.
>
> **What I would not accept as a reason to stop:** 'we've run out of time' with no risk statement, or 'all the test cases passed' when I know the cases don't cover the risky combinations. A green suite over weak coverage is a false signal, and stopping on it is worse than stopping late.
>
> **How I'd phrase it to a manager:** 'I recommend we stop. The defect rate has flattened, all critical paths are covered, three medium defects remain open with documented workarounds, and the untested area is behind a feature flag. The residual risk is X. Do you accept it?' That converts my judgement into their decision, with the evidence attached — which is where the decision belongs."

---

## Q119. Requirements are not clear / missing. What's your approach? 🔴 **P0** `[L1] [L2]` ⏱ **75 sec** — *from Image 1, Q2 and Q5*

**Why they ask.** Two of the thirteen questions in your first image are versions of this, so it's clearly valued. It's a **proactiveness** test.

**Say this — five steps, in order**

> "This is common rather than exceptional, so I have a routine rather than a reaction.
>
> **1. Gather what does exist before asking anyone.** Read the story, acceptance criteria, any linked designs, and — importantly — the **existing system behaviour**, since most 'new' features modify something that already works. I also check whether a similar rule exists elsewhere in the product; consistency with existing behaviour is usually the intended answer.
>
> **2. Write down my assumptions explicitly and get them confirmed.** This is the key move. Rather than asking an open 'what should happen?', I state a specific interpretation: 'I'm assuming the exchange bonus applies to ex-showroom price, not on-road, and that it can stack with a corporate discount. Confirming.' A specific assumption is far easier to correct than an open question is to answer, and it gets a reply in minutes rather than days.
>
> **3. Ask the right person, in the right order.** BA first for business intent, developer for implemented behaviour — noting that 'what the code does' isn't necessarily 'what it should do' — and the product owner for a genuine business decision. If the answer needs a commercial judgement, a developer can't give it and shouldn't be asked to.
>
> **4. Test against the assumption and flag it in the results.** I don't wait, blocked, for perfect clarity — that stalls the sprint. I test the most probable interpretation and mark those cases as assumption-based in the report. If the assumption turns out wrong, the affected cases are identified and re-run, rather than the whole suite being suspect.
>
> **5. Raise the ambiguity itself as an issue.** A requirement that two people read differently is a defect in the requirement. I log it, because if I only clarify it verbally, the same ambiguity reappears in the next sprint and the next tester makes a different assumption.
>
> **What I explicitly avoid:** guessing silently. An undocumented assumption is the most dangerous thing in a test cycle, because everyone believes it was verified when it was actually invented.
>
> **The most useful practical technique** — questions that make ambiguity visible: 'What should happen if…?' for edge cases, 'Is this inclusive or exclusive?' for boundaries, 'What's the expected behaviour when this fails?' for error paths, and 'Who decides this?' when it's a business rule rather than a technical one. Error handling and boundaries are, in my experience, the two things most consistently missing from acceptance criteria.
>
> **And a preventive step:** because this recurs, I now attend refinement and push for a **Definition of Ready** that includes error-path behaviour and boundary values. Fixing it at grooming is far cheaper than fixing it at test design, and it moved us from 'clarify during testing' to 'clarify before development' on most stories."

---

## Q120. How do you ensure the test cases you wrote are complete? 🟠 **P1** `[L2]` ⏱ **60 sec** — *from Image 1, Q11*

**Say this — six checks**

> "I use several independent checks, because any single measure of completeness can be gamed.
>
> **1. Bidirectional traceability.** Forward: every acceptance criterion maps to at least one case. Backward: every case maps to a criterion. The backward direction is the one that finds problems — an unmapped case is either redundant or, more interestingly, points at an undocumented requirement.
>
> **2. A systematic checklist per input and per rule.** For every field: valid, invalid, boundary, empty, null, maximum length, special characters, injection. For every business rule: the positive path, the negative path, and each boundary condition. This mechanical pass catches the gaps that intuition misses, and it's why I use a checklist rather than relying on thoroughness.
>
> **3. Peer review.** Another tester reviews my cases, and I review theirs. This is the highest-yield check by a clear margin — a second person consistently finds scenarios I was blind to, precisely because they don't share my mental model of the feature.
>
> **4. Developer review.** I share cases with the developer *before* they finish coding. They know which internal paths exist, so they'll say 'you haven't covered the case where the cache is stale' — a path invisible from the outside. It also means they fix some of it before I ever test.
>
> **5. Coverage of state and combination, not just input.** Have I covered transitions between states, not just the states themselves? Combinations of features, not just features in isolation? Feature interaction is where our real defects lived, and input-level checklists don't reach it.
>
> **6. The retrospective check — the most honest one.** After testing, I ask: which defects did I find through exploratory testing rather than my written cases? Every such defect represents a gap in my design, and I feed it back both as a new case and as a new checklist item. Over a few sprints that converges the written cases toward what actually matters.
>
> **The honest framing I'd give:** I can't prove completeness — that's not achievable. What I can do is show that the coverage is *systematic* rather than intuitive, reviewed by more than one person, and continuously corrected by what escapes it. Systematic and self-correcting is achievable; complete isn't, and claiming it would be a red flag."

---

## Q121. How would you test for security vulnerabilities in your application? 🟠 **P1** `[L2]` ⏱ **75 sec** — *from Image 1, Q12*

**Say this — scope boundary first, then the OWASP-anchored checklist**

> "Same boundary as the payment question: I'm not a penetration tester, and a full security assessment needs a specialist. What I own is the functional security checks a QA engineer can and should run, anchored on the OWASP Top 10 so it's systematic rather than ad hoc.
>
> **1. Broken access control — the highest-yield category.** This is where I find the most real issues:
> - **IDOR:** change an ID in a URL or API request — can dealer A read dealer B's inventory or bookings? The UI never exposes the other ID, so this is never found accidentally.
> - **Privilege escalation:** can a sales user call an admin endpoint directly, bypassing the UI that hides the button? Hiding a button is not authorisation.
> - **Forced browsing:** navigate straight to an admin URL while logged in as a normal user.
>
> **2. Injection.** SQL injection in every input that reaches a query — `' OR '1'='1` and its variants. XSS: submit `<script>alert(1)</script>` in a name or comment field, then check whether it's rendered raw *anywhere* it's later displayed — including in the dealer portal, the invoice PDF and any admin screen. **Stored XSS is the dangerous variant**, because the payload is saved and fires for a different user later, which is why I check every display surface and not just the form I typed into.
>
> **3. Authentication and session.** Weak password policy, no rate limiting on login, user enumeration through differing error messages, session not invalidated on logout, session fixation, missing timeout, and tokens that don't expire.
>
> **4. Sensitive data exposure.** Passwords or tokens in logs, browser storage or URLs. HTTPS enforced. No sensitive values cached. No internal detail in error messages — a stack trace tells an attacker your framework and version.
>
> **5. Security misconfiguration.** Default credentials, directory listing enabled, verbose error pages in production, unnecessary HTTP methods enabled (**this is where the TRACE check from Q86 belongs**), and missing security headers — HSTS, X-Frame-Options, Content-Security-Policy.
>
> **6. Business logic abuse** — the category automated scanners cannot find, and where a tester's domain knowledge is the actual value:
> - Apply an offer code beyond its usage limit
> - Tamper with the price or booking amount in a request
> - Book a vehicle that's out of stock by racing two concurrent requests
> - Skip a step in the flow — POST directly to the confirm-booking endpoint without paying
>
> That last category is where I'd claim genuine value, because it requires understanding what the business rules *are*. A scanner can find a missing header; only someone who knows the offer rules can find that the exchange bonus can be claimed twice.
>
> **Tools I'd use:** OWASP ZAP for an automated baseline scan, Burp Suite for intercepting and tampering with requests, and `npm audit`/OWASP Dependency-Check for vulnerable dependencies — which is worth mentioning because vulnerable third-party libraries are a common finding that requires no cleverness to detect, just the discipline to run the check.
>
> **What I escalate:** cryptographic review, infrastructure and network testing, and formal penetration testing. I make sure those are scheduled with a specialist rather than assuming my checklist covered them."

---

## Q122. Types of testing — the quick reference 🟡 **P2** `[L1]` ⏱ **60 sec**

**Functional**
Unit · Integration · System · Acceptance (UAT) · Smoke · Sanity · Regression · Retesting · Interface · Localisation

**Non-functional**
Performance (load, stress, spike, soak, scalability) · Security · Usability · Accessibility (WCAG) · Compatibility (cross-browser, cross-device) · Reliability · Recovery · Installation

**By approach**
Black-box · White-box · Grey-box · Manual · Automated · Exploratory · Ad-hoc · Risk-based

**The distinctions they probe**

| Pair | Difference |
|---|---|
| **Load vs Stress** | Load = expected peak, verify it holds. Stress = beyond capacity, find the breaking point and verify it fails *gracefully* |
| **Spike vs Soak** | Spike = sudden surge (campaign launch). Soak = sustained load over hours, finds memory leaks |
| **Verification vs Validation** | Verification = "are we building it right?" (reviews, static). Validation = "are we building the right thing?" (execution) |
| **QA vs QC vs Testing** | QA = process-oriented, preventive. QC = product-oriented, detective. Testing = the activity within QC |
| **Ad-hoc vs Exploratory** | Ad-hoc = unstructured, no plan. Exploratory = **structured** learning — simultaneous design and execution with charters and notes |
| **Accessibility** | Not optional — WCAG 2.1 AA. Keyboard navigation, screen-reader labels, colour contrast. Our colour-swatch picker failed contrast checks, which is a real finding on a feature that's entirely about colour |


---
---

# Part 10 — Agile & Process

> These are L2 and managerial-round questions. They're easy marks — but only if you answer from *your* project's actual practice rather than reciting the Scrum Guide. Every answer below has a project anchor for that reason.

---

## Q123. Explain Agile methodology and its ceremonies 🔴 **P0** `[L1] [L2] [MR]` ⏱ **90 sec**

**Say this — principles briefly, then the ceremonies with your role in each**

> "Agile is an iterative, incremental approach that delivers working software in short cycles with continuous feedback, rather than one large sequential handover. The four values from the manifesto: individuals and interactions over processes and tools; working software over comprehensive documentation; customer collaboration over contract negotiation; and responding to change over following a plan. Note it's 'over', not 'instead of' — documentation still matters, it's just not the priority.
>
> We run **Scrum with two-week sprints**. Five ceremonies, and I'll say what I do in each, because that's the more useful answer:

| Ceremony | When | Duration | My contribution as QA |
|---|---|---|---|
| **Sprint Planning** | Day 1 | 2–4 hrs | Estimate testing effort, flag stories that aren't testable yet, raise environment or data dependencies before they become blockers |
| **Daily Stand-up** | Every day | 15 min | What I tested, what I'm testing, what's blocking me. Blockers are the point — the other two are context |
| **Backlog Refinement / Grooming** | Mid-sprint | 1–2 hrs | **My highest-value ceremony.** I ask the clarifying questions and push for testable acceptance criteria before anything is built |
| **Sprint Review / Demo** | Last day | 1–2 hrs | Confirm the demoed increment matches what was actually tested; raise anything shipped with known limitations |
| **Retrospective** | Last day | 1 hr | Process improvements. This is where the impact-analysis change from Q98 came from |

> **Roles:** Product Owner owns the backlog and priority. Scrum Master facilitates and removes impediments. The Development Team — including QA — is cross-functional and self-organising. **QA isn't a separate downstream team; we're inside the team, which is the whole point.**
>
> **Artifacts:** product backlog, sprint backlog, and the increment. Plus the burndown chart for tracking.
>
> **What Agile changed for me specifically:** I don't receive a finished build and start testing. I'm involved from refinement, I test continuously as stories complete, and I automate within the same sprint. The 'testing phase' as a distinct block at the end doesn't exist — which is exactly why shift-left matters and why refinement is the ceremony I care most about."

---

## Q124. Scrum vs Kanban 🔴 **P0** `[L1] [L2]` ⏱ **75 sec** — *appears 2×, plus the odd "Agile vs Kanban" phrasing*

| | Scrum | Kanban |
|---|---|---|
| **Cadence** | Fixed-length sprints (1–4 weeks) | **Continuous flow** — no sprints |
| **Commitment** | Sprint scope committed up front | Pull work as capacity frees up |
| **Roles** | Defined: PO, SM, Dev Team | No prescribed roles |
| **Ceremonies** | Five prescribed | None mandatory (though many teams keep stand-ups) |
| **Limits work by** | Sprint capacity (velocity) | **WIP limits per column** |
| **Change mid-cycle** | Discouraged — protects the sprint goal | Freely — just re-prioritise the queue |
| **Board** | Reset each sprint | Persistent |
| **Key metrics** | Velocity, burndown | **Cycle time, lead time, throughput** |
| **Release** | Usually at sprint end | Continuous, whenever ready |
| **Best for** | Feature development with a planning horizon | Support, maintenance, unpredictable inflow |

**Say this — and note the naming issue in the question**

> "One clarification first: **Kanban is itself an Agile method**, so 'Agile vs Kanban' isn't really a valid comparison — it's like asking 'vehicles vs cars'. The meaningful comparison is Scrum vs Kanban, both being Agile approaches.
>
> The core difference: **Scrum is timeboxed and commitment-based; Kanban is flow-based and limited by work in progress.** Scrum says 'here's what we'll deliver in two weeks'. Kanban says 'no more than three items in test at once, and we'll deliver each as it's ready'.
>
> **WIP limits are Kanban's key mechanism**, and they're genuinely powerful. If the Testing column has a limit of three and it's full, developers can't push a fourth item — they have to help clear the bottleneck instead. That surfaces the constraint immediately, where in Scrum an overloaded QA at the end of a sprint just becomes a crunch.
>
> **My project uses both, deliberately.** Feature development runs in Scrum with two-week sprints. Production support runs on a Kanban board, because you cannot sprint-plan a production incident — it arrives when it arrives. That's actually the standard hybrid, sometimes called Scrumban, and it's a more realistic answer than claiming pure Scrum.
>
> **From a QA perspective specifically:** Scrum's fixed sprint gives me a predictable rhythm — I know when builds land and when regression runs. Kanban is better when work is unpredictable, but it needs discipline, because without WIP limits 'continuous flow' becomes 'everything is in progress and nothing is finished', and QA is usually where that piles up."

---

## Q125. What is a story point? 🔴 **P0** `[L2] [MR]` ⏱ **60 sec** — *from your L2 list*

**Say this**

> "A story point is a **relative** measure of the effort to deliver a story, combining complexity, volume of work, and uncertainty or risk. The key property is that it's **relative, not absolute** — a 5-point story is roughly five times a 1-point story, but a point doesn't correspond to a number of hours.
>
> **Why relative rather than hours?** Three reasons:
> - People are consistently bad at absolute time estimation but reasonably good at *comparison* — 'this is bigger than that' is easier and more reliable than 'this takes 14 hours'.
> - Points are person-independent. Six hours for a senior developer might be two days for a new joiner; the story's *size* is the same.
> - Points remove the false precision and the implied commitment of an hour estimate.
>
> We estimate with the **Fibonacci sequence** — 1, 2, 3, 5, 8, 13 — because the widening gaps reflect genuinely increasing uncertainty. Nobody can meaningfully distinguish a 12 from a 13, so offering both is false precision.
>
> A story estimated at 13 or above is a signal to **split it**, not to estimate it more carefully. Large stories carry too much uncertainty to fit reliably in a sprint.
>
> **Velocity** is the number of points a team completes per sprint, averaged over several sprints. It's used for forecasting — 'at 30 points a sprint, this 120-point epic is about four sprints' — and it's a planning tool, not a performance measure.
>
> **The QA-specific point, and the one I'd make sure to say:** the estimate must include **testing effort**, not just development. A story that's simple to build but needs 40 pricing combinations verified isn't a 2 — it's larger. Early in my time on the project we estimated dev-only, and QA became the sprint bottleneck every time. Now I contribute to the estimate in planning, and if a story is trivial to code but heavy to test, I say so and the number reflects it."

**Follow-up trap:** *"Can you compare velocity between two teams?"*
> "No, and doing so is a classic misuse. Points are calibrated within a team — one team's 5 is another's 8. Comparing velocities across teams incentivises point inflation and tells you nothing real. Velocity is only meaningful as a team's own trend over time."

---

## Q126. What do you mean by estimation in Agile? 🟠 **P1** `[L2] [MR]` ⏱ **60 sec** — *from your L2 list*

**Say this — the techniques, then how I estimate testing specifically**

> "Estimation in Agile is collaborative and relative rather than an individual expert's hour count. Three techniques we use:
>
> **1. Planning Poker.** Everyone estimates simultaneously with cards, then reveals together. Simultaneous reveal matters — it prevents anchoring on the most senior person's number. Where estimates diverge widely, that divergence is the valuable output: it means people understand the story differently, and the discussion surfaces a hidden assumption. **The conversation is worth more than the number.**
>
> **2. T-shirt sizing** — S/M/L/XL for epics and early-stage items where a numeric estimate would be spurious precision.
>
> **3. Reference-story baselining.** We anchor to a known story: 'the state-tax configuration story was a 3 — is this bigger or smaller?' Without a shared reference point, points drift over time and become meaningless.
>
> **How I estimate testing effort specifically**, which is the part relevant to my role — five factors:
> - **Number of test cases needed**, driven by rule complexity rather than screen count
> - **Test data preparation**, which is frequently the largest hidden cost. A pricing story needs configuration across multiple states, and setting that up can exceed the execution time
> - **Environment and integration dependencies** — does it need the payment sandbox or the OEM's dispatch system?
> - **Regression impact** — a change to the shared offer engine means a much wider regression scope, and that must be in the estimate
> - **Automation effort**, if the story's tests are going into the suite this sprint
>
> **The lesson I'd offer from experience:** we consistently underestimated test *data* setup, not test execution. Adding it explicitly as a factor made our estimates noticeably more accurate. And I'd rather flag a story as larger in planning than discover in the last two days of the sprint that it can't be properly tested — a late discovery costs the sprint goal, an early one just costs a bigger number."

---

## Q127. Product backlog vs sprint backlog 🟠 **P1** `[L2]` ⏱ **45 sec**

| | Product Backlog | Sprint Backlog |
|---|---|---|
| **Owner** | Product Owner | The Development Team |
| **Scope** | Everything ever wanted, whole product | Only the current sprint's committed items |
| **Lifespan** | Permanent, continuously evolving | One sprint |
| **Ordering** | Prioritised by business value | Broken into tasks |
| **Detail** | Top items detailed, lower items coarse | Fully detailed with tasks and estimates |
| **Can change** | Anytime — PO adds and reorders freely | **Protected** — only the team may change it |

**Say this**

> "The product backlog is the single ordered list of everything that might be built — features, defects, technical debt, spikes. The Product Owner owns its content and order. It's **progressively refined**: the top items are detailed and ready, items further down are deliberately coarse, because detailing something that may never be built is waste.
>
> The sprint backlog is what the team committed to this sprint, decomposed into tasks. Crucially, **it belongs to the team** — the Product Owner can't add to it mid-sprint. That protection is what makes a sprint goal achievable; without it you get continuous scope injection.
>
> **The QA-relevant detail:** QA tasks live in the sprint backlog as first-class items — 'write test cases for offer stacking', 'automate the pricing regression pack'. If testing work isn't visible on the board, it isn't planned, and it silently gets squeezed at the end. Making it visible is a small thing that changed how our sprints ran.
>
> And defects found *within* the sprint go into the sprint backlog as tasks on the parent story, not into the product backlog — a story with an open defect isn't Done. Defects found in *released* software go to the product backlog to be prioritised."

**Follow-up trap:** *"Definition of Ready vs Definition of Done?"*
> "**Ready** is the entry gate — criteria a story must meet before it can enter a sprint: clear acceptance criteria, dependencies identified, estimated, testable. Pushing for a strong Definition of Ready is the single most effective thing I've done to reduce mid-sprint ambiguity, because it forces the requirement questions from Q119 to be answered before development starts rather than during testing.
>
> **Done** is the exit gate: code complete, unit tested, code reviewed, **functional testing passed**, automated tests written, no open critical defects, documentation updated. As QA I care that 'tested' is explicitly in the Definition of Done — otherwise 'done' means 'the developer finished coding', and that ambiguity is where release-night surprises come from."


---
---

# Part 11 — Scenario, Debugging & Behavioural

> **Your sources flag these as "VERY IMPORTANT" — and they're right.** These are the highest-differentiation questions in the whole interview, because everyone has the same theory but only some people can debug.
>
> **The universal structure for every scenario question: reproduce → isolate → classify → act → prevent.** Interviewers are checking that you have a *method*, not a guess. Answer with the method and you'll outscore candidates with more technical knowledge.

---

## Q128. A test case is failing. What will you do? 🔴 **P0** `[L1] [L2]` ⏱ **90 sec**

**Say this — walk the funnel, out loud, in order**

> "I work through a funnel from most likely to least likely, because the goal is to reach the correct classification quickly rather than to guess.
>
> **Step 1 — Reproduce it manually.** Before anything else. This single step answers the most important question: is this a product defect or a script problem? If I follow the same steps by hand and the application misbehaves, it's a defect. If the application works fine manually, it's my script or the environment. **Everything downstream depends on getting this classification right**, and getting it wrong wastes a developer's time or hides a real bug.
>
> **Step 2 — Read the actual error, not just 'it failed'.** The exception type tells me most of what I need:
> - `NoSuchElementException` → locator changed, or the element hadn't rendered yet
> - `ElementNotInteractableException` → present but covered or disabled — usually a timing issue
> - `TimeoutException` → my wait condition is wrong, or the app is genuinely slow
> - `AssertionError` → the script worked and the *value* was wrong. **This is the one most likely to be a real defect** — it means Selenium did everything correctly and the application produced the wrong answer.
> - `NullPointerException` → almost always my framework, usually a failed setup
>
> **Step 3 — Check the evidence I already have.** The failure screenshot, the current URL from my listener, the browser console log. Often the screenshot immediately shows a 500 error page or a session timeout, and that's the whole investigation.
>
> **Step 4 — Isolate the variables.** Did it fail for *all* data rows or just one? One row failing points at data or a data-specific rule — 'Maharashtra fails, Karnataka passes' immediately suggests a state-specific tax configuration. Did it fail on all browsers or just one? Browser-specific means a rendering or compatibility issue. Is it failing consistently or intermittently? Consistent is easy; intermittent means timing, test data contention, or a genuine race condition.
>
> **Step 5 — Check what changed.** Recent deployment? Environment refresh? Test data cleanup? A locator changed in a UI update? If five tests failed simultaneously and they share a page object, that's a locator change, not five separate bugs. **Clustering is a strong diagnostic signal** — I always look at the failures together before investigating any one of them.
>
> **Step 6 — Classify and act:**
>
> | Classification | Action |
> |---|---|
> | **Product defect** | Log in Jira with steps, expected/actual, screenshot, logs, environment, build number. Assign severity by business impact |
> | **Script issue** | Fix the script, and ask whether the same weakness exists elsewhere — usually it does |
> | **Test data issue** | Fix the data and improve the setup so it's self-sufficient rather than dependent on existing records |
> | **Environment issue** | Raise with DevOps, mark the run as invalid rather than reporting a false defect count |
> | **Requirement change** | Update the test — the test is stale, not wrong |
>
> **Step 7 — Prevent the recurrence.** If it was a timing issue, was my wait condition wrong or was there no wait at all? If it was test data, can the test create its own data instead of depending on a pre-existing record? **A fix that doesn't address why it happened means I'll debug the same failure next month.**
>
> **The mistake I actively avoid:** the pressure in CI is to make red go green. Adding a `Thread.sleep()` or a retry until it passes is the fast fix and the wrong one — it converts a visible problem into an invisible one. I'd rather have a red test that tells the truth."

---

## Q129. The script worked yesterday and fails today. What happened? 🔴 **P0** `[L1] [L2]` ⏱ **75 sec**

**Why they ask.** This is the best debugging question on your list, because the framing itself is the clue: **nothing fails without something changing.** The answer is a systematic search for the change.

**Say this**

> "The script didn't change, so *something* did. My job is to find what. I check in rough order of likelihood, because that's the fastest path:
>
> **1. A new build was deployed** — by far the most common cause. A UI change altered a locator, a validation rule changed, an element became disabled by default. First thing I check: what was deployed since the last green run? I compare the build numbers, then look at the commits touching my area.
>
> **2. Test data changed or was cleaned.** The dealer account my test used got deactivated. The vehicle it books went out of stock. A nightly cleanup removed the record it depended on. **This is the second most common cause and the most under-suspected** — the script is fine, its assumed starting state is gone. It's also why I push for tests that create their own data rather than depending on pre-existing records.
>
> **3. Environment change.** Database refreshed from a different source, a config value changed, a dependent service updated or unavailable, a certificate expired, the API version bumped. Check whether *other* tests are also failing — if half the suite went red at once, it's environmental, not a specific script.
>
> **4. Browser or driver auto-updated.** Chrome updates itself overnight, and if the driver isn't in step you get session-creation failures. Less common since Selenium Manager handles resolution automatically, but a classic historic cause. Symptom: everything fails at setup, not at a specific step.
>
> **5. A date or time dependency.** This is the sneaky one and it's worth calling out specifically: the test hardcoded a date that has now passed, or it's the first of the month, or a campaign window expired at midnight, or the test ran across a month boundary. A test that passes for 27 days and fails on the 28th is nearly always a date issue. **This is exactly why I compute dates relative to `LocalDate.now()`** rather than hardcoding them, as in the calendar answer.
>
> **6. Genuine intermittency that was always there.** It might not be a new failure at all — just a flaky test whose race condition finally lost. I check the history: has this test failed before, occasionally? If it's failed three times in two months, it's flaky and always was, and 'worked yesterday' is survivorship bias.
>
> **How I actually narrow it down fast:** run the single test locally against the same environment. If it passes locally but fails in CI, the difference is environmental — headless mode, screen resolution, network latency, or parallel-execution contention. If it fails locally too, it's the application or the data. That one comparison splits the problem space in half in about two minutes.
>
> **And the preventive measure:** this class of question is why the framework logs the build number, environment and test data used into every report. When someone asks 'why did this start failing?', I can answer from the report instead of investigating from scratch."

---

## Q130. An element is not found. How will you handle it? 🔴 **P0** `[L1]` ⏱ **60 sec**

**Say this — diagnose before fixing, and note the reflex to avoid**

> "The reflex is to increase the wait. That's usually wrong, and it hides the real cause. I diagnose first — six possibilities:
>
> **1. It genuinely isn't there yet** — an async render or API call hasn't completed. Fix: an explicit wait on the *correct* condition. And the condition matters: `visibilityOf` if I need to see it, `elementToBeClickable` if I need to click it, `presenceOf` if it's a hidden token. Using `presenceOf` and then clicking is a common mistake that produces `ElementNotInteractableException` instead.
>
> **2. The locator is wrong or has changed.** I verify it directly in DevTools with `$x("//my/xpath")` or `document.querySelector()`. If it returns nothing, the locator is the problem — no amount of waiting fixes that. If the UI changed, I also ask whether my locator was too fragile to begin with, and switch to something stable like a `data-test` attribute.
>
> **3. It's inside an iframe.** The element is visibly on screen but the driver is scoped to a different document. This is the most confusing failure mode because everything looks correct. Fix: `switchTo().frame()` first — and this is why I check for an iframe early whenever an element is clearly visible but 'not found'.
>
> **4. It's in a different window or tab.** Same category of mistake — the driver is focused elsewhere.
>
> **5. It's off-screen or covered.** Present in the DOM but not reachable — a sticky header or a cookie banner is on top of it. Fix: scroll it into view with `{block:'center'}`, or dismiss the overlay. A JavaScript click is a fallback, but I'd note that a JS click **bypasses what a real user experiences** — if a user genuinely can't click it because a banner covers it, then that's a defect I should be reporting, not working around.
>
> **6. The application state is wrong.** The element only appears for a certain user role, or after a prerequisite step. The test's precondition wasn't met — so the bug is earlier in the test than where it failed.
>
> **The key judgement I'd emphasise:** before fixing the script, I ask whether this is actually a defect. If the Proceed button isn't rendering when the requirements say it should, that's a bug report, not a locator update. **Silently 'fixing' a test to accommodate broken behaviour is how real defects get automated away** — and it's the worst thing an automation engineer can do, because the suite then actively certifies the bug as correct."

---

## Q131. Describe a challenging bug you caught — root cause and collaboration 🔴 **P0** `[L2] [MR]` ⏱ **2 min**

**Why they ask.** It's on your list marked important, and it's the best single behavioural question: it tests technical depth, investigative rigour, and how you work with developers, all at once.

**Say this — STAR, and pick a bug with a non-obvious root cause**

> **Situation.** Our QA regression suite started failing intermittently on the on-road price assertion — roughly one run in four. Always the same test, never the same data row, and it always passed when I ran it individually. Classic 'flaky test', and the initial assumption on the team was that it was a script problem.
>
> **Task.** I wasn't comfortable writing it off as flakiness, because the assertion failure was on a *value* — the price was wrong, not the element missing. A script problem doesn't usually produce a wrong number; it produces an exception. That distinction is what made me keep digging.
>
> **Action — the investigation:**
> - **Established the pattern.** I added logging of the actual versus expected price on failure. The failures weren't random values — the price was consistently missing the accessory component. So the accessory wasn't being included in the total.
> - **Ruled out the script.** Ran it 50 times serially — passed every time. Ran it in the parallel suite — failed intermittently. **That told me it was concurrency-related, not logic-related.**
> - **Isolated the variable.** Reduced the thread count to 1: no failures. Raised it to 4: failures returned. So it depended on parallel execution.
> - **Found the mechanism.** I checked the pricing API directly with the same payload while another thread was configuring a different vehicle. The API returned a price that was correct for the *other* thread's configuration. The service was caching the configuration in a way that wasn't request-scoped — under concurrent requests, one user's accessory selection could leak into another user's price calculation.
>
> **Root cause.** A shared mutable state in the pricing service — the configuration object was held at a scope that was effectively shared between concurrent requests rather than per-request. Under low load it never surfaced, because requests never overlapped closely enough.
>
> **Collaboration — the part they're really assessing:**
> - I did **not** log it as 'price is sometimes wrong'. That would have been dismissed as flakiness, which is exactly what nearly happened.
> - I logged it with the reproduction conditions — concurrent requests with different configurations — plus the API-level evidence showing the response contained another request's data, and the thread-count correlation. **Evidence turns 'the test is flaky' into 'the service has a concurrency bug' in one conversation.**
> - I sat with the developer to reproduce it live rather than throwing the ticket over the wall. They found the scope issue in about twenty minutes once they could see it happen.
> - We discussed severity together. In our QA environment it looked like a minor intermittent glitch. In production, under real concurrent traffic, it would mean **customers being shown prices computed from someone else's configuration** — a serious commercial and legal problem for a price disclosure. Framing it in that business impact is what got it prioritised as a blocker rather than a backlog item.
>
> **Result.** Fixed within the sprint. And two things came out of it that I'm more pleased with than the bug itself:
> 1. **A concurrency test added permanently** — parallel requests with different configurations, asserting each gets its own correct price. That class of defect can't recur silently now.
> 2. **A team principle:** an intermittent *assertion* failure gets investigated, not retried. An intermittent element-not-found is usually a timing issue; an intermittent wrong *value* is usually a real bug. That distinction has caught one more genuine defect since.
>
> **What I learned.** The instinct to dismiss a flaky test is the dangerous one. The retry mechanism would have made this bug invisible — it would have passed on the second attempt and we'd have shipped it. **That's the concrete reason I'm careful about blanket retries**, which I mentioned earlier: a retry that hides a real intermittent bug is worse than a red test.

> **How to adapt this:** the shape is what matters — a non-obvious root cause, evidence-driven diagnosis, business-impact framing to get priority, collaboration rather than handoff, and a permanent preventive test. Substitute your own bug into that structure.

---

## Q132. A developer says "it's not a bug, it works on my machine" 🟠 **P1** `[L2] [MR]` ⏱ **60 sec**

**Say this — no defensiveness, just evidence**

> "This usually isn't a conflict, it's an information gap — and treating it as a conflict is the mistake. My approach:
>
> **1. Take the claim seriously.** 'Works on my machine' is data, not obstruction. If it genuinely works for them, then something differs between us, and that difference is the actual finding. Sometimes the difference *is* the bug — a hardcoded local config, a missing migration, a cached value.
>
> **2. Eliminate the obvious differences.** Build number, environment, browser and version, user role, test data, and whether they cleared cache. In my experience the most common resolutions are: they were on a newer local build than what's deployed to QA, or they tested with an admin account while I used a dealer account with different permissions. Both are legitimate explanations and neither is anyone's fault.
>
> **3. Strengthen the evidence.** A screenshot is weak; a screen recording with the network tab open is hard to argue with. I add the exact request and response, the console errors, the build number, and clear reproduction steps starting from a known state. **Most 'not a bug' pushback dissolves when the evidence is unambiguous** — because the pushback was usually about not being able to reproduce it, not about disagreeing with me.
>
> **4. Reproduce together.** Screen-share on the QA environment. This resolves it faster than any amount of ticket comments, and it's collaborative rather than adversarial.
>
> **5. If we still disagree on whether the behaviour is correct** — which is the genuinely interesting case — then it's not a technical dispute, it's a **requirements** dispute. Neither of us gets to decide. I take it to the BA or Product Owner: 'the system does X, I expected Y, which is correct?' That reframes it from a disagreement between two people into a question for the person who owns the answer. It also often reveals that the requirement was ambiguous, which is worth logging in itself.
>
> **The tone I hold:** I'm not trying to win. I'm trying to establish what the correct behaviour is. If I'm wrong, I close the ticket and I've learned something about the system. I've been wrong before — I once raised a rounding difference that turned out to be the specified behaviour for a particular state's tax rule. Closing that myself, promptly and without fuss, bought me more credibility than being right would have."

---

## Q133. There's no time to test before the release. What do you do? 🟠 **P1** `[MR]` ⏱ **75 sec**

**Say this — risk-based prioritisation and a documented decision**

> "I don't refuse, and I don't pretend it's fine. I make the trade-off explicit and let the business decide with full information.
>
> **1. Establish what actually changed.** Impact analysis first. 'Not enough time to test everything' is very different from 'not enough time to test the changed area'. Usually the change is narrow and the panic is about full regression.
>
> **2. Prioritise ruthlessly by risk.** Risk = likelihood × business impact. In our case:
> - **Must test:** the changed functionality, and anything in the revenue path — configure, price, book, pay. A wrong price or a broken payment is unacceptable at any time pressure.
> - **Must test:** the automated smoke pack — it's 10 minutes and it's non-negotiable. There is no time pressure that justifies skipping 10 minutes.
> - **Should test:** high-traffic paths adjacent to the change.
> - **Can defer:** low-traffic admin screens, cosmetic issues, rarely-used configurations.
>
> **3. Use what's free.** The automated regression suite costs me nothing but wall-clock time — I trigger it immediately, in parallel with manual testing, rather than sequentially. This is where automation pays for itself most visibly: I'm not choosing between coverage and speed for anything already automated.
>
> **4. Document the reduced scope in writing, before the release.** 'Tested: pricing, offers, booking, payment. Not tested: dealer commission report, accessory recommendations. Risk if those are broken: the commission report is used weekly, so a defect would surface within days with no customer impact.' That converts my judgement into their informed decision.
>
> **5. Give a conditional recommendation rather than a blank sign-off.** 'I can sign off on the customer booking flow. I cannot sign off on the dealer reporting module. If we can put that behind a flag, I'd recommend go.' A feature flag frequently turns a no-go into a safe go, and suggesting it is more useful than blocking.
>
> **6. Ask for the safety net.** Is rollback tested? Is monitoring in place on the changed area so we'd know quickly if something breaks? **When you can't test more before, you compensate by detecting faster after.** That's a legitimate risk-management answer, not a cop-out.
>
> **7. Raise it in the retrospective — but as a pattern, not a complaint.** If this happens every release, the problem isn't the release, it's the process. That's where I'd push for a stronger Definition of Ready or earlier build availability.
>
> **The one thing I won't do is sign off on something I haven't tested.** I'll happily reduce the scope of the sign-off and state the gap. The scope is negotiable; the honesty isn't."

---

## Q134. How do you keep automated tests stable? 🟠 **P1** `[L2]` ⏱ **75 sec**

**Say this — six practices, in order of impact**

> "Flakiness is the thing that kills trust in a suite, and once the team stops trusting it, they stop reading the results — at which point the suite is worse than nothing, because it costs maintenance and delivers no signal. Six practices, roughly in order of how much they helped us:
>
> **1. Explicit waits on the correct condition, and zero `Thread.sleep()`.** This eliminated the majority of our flakiness on its own. And 'correct condition' matters — waiting for presence and then clicking is a bug waiting to happen; wait for `elementToBeClickable`.
>
> **2. Stable locators.** `data-test` attributes negotiated with the dev team, never absolute XPaths or index-based locators, never auto-generated IDs. A locator that only exists for testing can't be broken by a CSS refactor.
>
> **3. Full test independence.** Every test creates its own data and cleans up after itself. No test depends on another having run, and no test depends on a pre-existing record that a cleanup job might remove. **This was our second-biggest source of flakiness** — tests sharing a booking slot and intermittently competing for it, exactly the race condition I mentioned in the parallel execution answer.
>
> **4. Thread-safety for parallel runs.** `ThreadLocal` for the driver and the report object, no shared mutable state, unique data per thread. Parallel execution turns any shared state into an intermittent failure.
>
> **5. Treat flaky tests as defects with an owner.** We track a flakiness rate per test. Anything failing intermittently gets a ticket and gets investigated — not retried into silence. And as in Q131, an intermittent *assertion* failure is escalated rather than dismissed, because that's the signature of a real concurrency bug rather than a timing issue.
>
> **6. Assert on the right things.** Don't assert on volatile content that legitimately changes — a timestamp, an ad banner, a 'recently viewed' list. Those aren't flaky tests, they're wrong tests. I've removed assertions rather than 'fixed' them, which is sometimes the correct answer.
>
> **The mindset that matters most:** a flaky test is a *defect in the test*, and it deserves the same treatment as a product defect. The tempting alternative — adding a retry until it goes green — makes the dashboard look better and the suite mean less. And Playwright helped here structurally rather than through discipline: auto-waiting removed a whole class of timing flakiness by design, and Trace Viewer made the remaining failures fast to diagnose instead of a guessing exercise."

---

## Q135. A defect leaked to production. What do you do? 🟠 **P1** `[MR]` ⏱ **75 sec**

**Say this — immediate response first, blame never**

> "Two distinct phases, and mixing them up wastes the critical hour.
>
> **Phase 1 — Stop the bleeding.** Before any analysis:
> - Assess the impact: how many users, how severe, is there data corruption, is money involved? For us, a pricing defect means customers may have been shown or charged the wrong amount, which escalates immediately.
> - Get it in front of the right people fast, with the impact stated in business terms.
> - Support the fix: reproduce it reliably so the developer isn't guessing, and identify the affected records so the business knows the exposure.
> - Verify the hotfix and the rollback path.
> - **Identify affected customers**, which is often the most urgent part — if 40 bookings were priced wrongly, someone needs that list to reconcile them.
>
> **Phase 2 — Root cause analysis, and this is the part I own.** The question is never 'who missed it' — it's **'why was this class of defect invisible to our process?'** Usually one of five:
>
> | Gap | What it means |
> |---|---|
> | **No test existed for it** | A coverage gap. Add the case, and ask what *else* that gap covers |
> | **A test existed but wasn't run** | A regression-selection failure — this was exactly the Q98 impact-analysis miss |
> | **A test existed and passed** | The most serious: the test was **wrong**. Weak assertion, or wrong expected value |
> | **Not reproducible in QA** | An environment or data-fidelity gap — production data differs from test data |
> | **Requirement was wrong** | Not a testing failure at all. We tested the specification correctly and the specification was wrong |
>
> That last one matters: not every production defect is a QA failure, and conflating them leads to the wrong fix.
>
> **Then the preventive action, which is the actual deliverable.** For every leaked defect I add the reproducing case to the automated regression pack. **A test derived from a real production defect is the highest-value test you can write**, because you have proof that path can break — unlike a hypothetical case. And if the pattern repeats, the fix is process: our dependency map for shared services came directly out of a leaked defect.
>
> **On accountability:** I'd own my part clearly and without self-flagellation. If I didn't run the regression pack for the impacted area, I say so. What I'd resist is a blame-focused post-mortem, because it makes people hide information and you lose the learning. The question that produces improvement is 'what would have caught this?' — not 'who should have caught this?'
>
> **And the honest closing point:** some defect leakage is inevitable. Zero escaped defects isn't a realistic target for any real system. What's measurable and improvable is the **trend**, the **severity** of what escapes, and the **time to detect**. If leaked defects are getting less severe and being caught faster, the process is working."

---

## Q136. How do you prioritise when you have 500 cases and one day? 🟠 **P1** `[L2] [MR]` ⏱ **60 sec**

**Say this**

> "Risk-based selection, and I'd work it in four steps:
>
> **1. Automation takes the volume.** The first question is how many of the 500 are automated. If 350 are, that's 2.5 hours unattended and I've solved most of the problem — so I trigger it immediately and it runs while I do everything else. This is the practical argument for automation, stated in exactly the terms a manager cares about.
>
> **2. Rank the remaining manual cases by risk = business impact × likelihood of failure.**
> - **P1 — must run:** revenue path (configure → price → book → pay), plus anything touching the change under test. If these fail, the release doesn't ship.
> - **P2 — should run:** high-traffic paths adjacent to the change, and any area with historically high defect density. Past defect data is a better predictor than intuition.
> - **P3 — defer:** low-traffic admin screens, edge configurations, cosmetic checks.
>
> **3. Prefer breadth over depth under time pressure.** One test per critical area beats ten tests in one area. A shallow pass across all critical modules is far more likely to catch a serious problem than exhaustive coverage of one. This is essentially running a wide smoke pass and then deepening where time allows.
>
> **4. Report the actual coverage, not a percentage.** '112 of 500 executed' is a useless number on its own. 'All critical revenue paths executed and passing; accessory recommendations and dealer reporting not executed; here's the residual risk' is a statement someone can act on.
>
> **And I'd ask one question back**, because it usually changes the answer: **is the deadline the real constraint, or is the scope?** Sometimes the right response is 'we can't responsibly release all of this tomorrow, but we can release the booking module tomorrow and the reporting module next week.' Reducing scope is often available when reducing quality isn't, and nobody had thought to ask."

---

## Q137. How do you handle disagreement with a BA or Product Owner? 🟡 **P2** `[MR]` ⏱ **60 sec**

**Say this**

> "Most disagreements I've had turned out to be about **information asymmetry rather than opinion** — one of us knew something the other didn't. So my first move is to make sure we're actually discussing the same thing.
>
> **My approach:**
> - **State my position with reasoning and evidence, not just conclusion.** Not 'this severity is wrong' but 'I'd rate this High rather than Medium because it affects the on-road price display, which is a legally disclosed figure, and it affects all Maharashtra bookings — roughly 20% of our volume.' Data changes minds; assertion doesn't.
> - **Ask what I'm missing.** Genuinely. Often there's business context I don't have — a commercial commitment, a client conversation, a regulatory deadline. Once I know it, I frequently agree with them.
> - **Separate the technical facts from the business judgement.** I own 'this is what the system does and this is the impact.' They own 'this is what we're willing to accept.' That boundary resolves most disputes cleanly, because we stop arguing across it.
> - **Escalate on substance, not on frustration.** If it's a genuine risk decision above my authority, I bring it to the QA lead or the delivery manager with the facts laid out — not as a complaint about a person.
>
> **When I've lost the argument:** if the decision goes against me after I've stated the risk clearly, I document it and move on constructively. That's not defeat — that's the correct outcome of a process where risk acceptance is a business decision. My job is to make sure it's an **informed** decision, not to make it myself.
>
> **The one exception:** if I believe something is genuinely unsafe or legally non-compliant — a wrong price on a mandatory disclosure, or a data-privacy exposure — I escalate further and put it in writing. That's a different category from a severity disagreement, and I'd want a paper trail. But in two years that's been rare; almost everything resolves once the impact is stated in business terms."

---

## Q138. Where do you see yourself in a few years? / Why Infosys? 🟠 **P1** `[HR]` ⏱ **60 sec**

**Say this — specific, and connected to what you've already described**

> **Growth question:**
> "Two directions, and they're related. Technically, I want to move from *using* a framework to *owning* one — I've built the Playwright suite from scratch, and I want more of that: architecture decisions, CI/CD pipeline ownership, and getting deeper into performance testing, which is the area I'm currently weakest in.
>
> The second direction is influence over quality rather than just verification of it. The work I've valued most in the last year wasn't finding bugs — it was getting `data-test` attributes adopted, and getting impact analysis into the story template. Those changes prevented whole classes of defect. I'd like to do more of that, which points toward a lead or SDET role over the next few years."

> **Why Infosys:**
> "Three reasons, and I'd be specific rather than flattering.
>
> First, **scale and variety of domains.** I've worked on one automotive product for two years and I've learned it deeply, but I'm aware that's one domain and one architecture. Infosys works across banking, retail, healthcare — and testing exposure across domains is how you learn which practices are universal and which were just local habits.
>
> Second, **process maturity.** I've largely figured out our QA process myself, by trial and error. I want to work somewhere with established practice I can learn from rather than reinvent — and where automation and CI/CD are mature rather than something I'm advocating for.
>
> Third, **the structured growth path.** Infosys has a defined progression and a genuine investment in certification and training. At my stage, that structure matters more than it will later."

> **Two things to avoid.** Don't say 'for better opportunities' — it's what everyone says and it signals nothing. And don't criticise your current employer; say what you want to grow *toward*, not what you're escaping. If asked directly why you're leaving: *"I've learned a lot on a single product and I want broader exposure and deeper framework ownership than my current scope allows."* That's honest, forward-looking, and unattackable.


---
---

# Part 12 — Playwright — all 50 questions

> **From your second image.** Compressed format — answer, code where it matters, and the trap. Full-length treatment isn't useful for 50 questions, and Infosys will only go deep on Playwright if it's prominent on your resume.
>
> **Read Q40 (findElement), Q42 (dynamic elements), Q47 (frames) and Q59 (stale element) in Part 5 alongside this section** — the Selenium-vs-Playwright contrast is where most of the marks are.

---

## 12.1 — General and Core Concepts (Q1–Q25)

### PW1. What is Playwright? 🔴 **P0**
An open-source end-to-end testing framework from Microsoft. It automates Chromium, Firefox and WebKit through a single API, and ships with its own test runner. Its distinguishing property is **auto-waiting**: every action waits for the element to be actionable before proceeding.

### PW2. Key features 🔴 **P0**
Auto-waiting · cross-browser via bundled engines · **BrowserContext** isolation · built-in test runner with parallelism and retries · **Trace Viewer** · native network interception (`page.route`) · Codegen · mobile emulation · web-first assertions that auto-retry · multi-tab and multi-origin support in one test.

### PW3. Languages supported 🟠 **P1**
**TypeScript/JavaScript** (first-class), Python, Java, .NET/C#. The JS/TS binding gets features first and has the best ecosystem — worth saying, since it explains why our project uses TS.

### PW4. How is Playwright different from Selenium? 🔴 **P0**
→ **Full answer with the comparison table is at Q14 in Part 2.** The one-line version: Selenium uses the W3C WebDriver protocol over HTTP with a separate driver process; Playwright talks to the browser directly over a persistent WebSocket connection. Auto-waiting, BrowserContext, network mocking and Trace Viewer all follow from that architecture.

### PW5. Components of Playwright 🟠 **P1**
```
Playwright  →  Browser  →  BrowserContext  →  Page  →  Frame  →  Locator
```
- **Browser** — one browser process (expensive to launch)
- **BrowserContext** — an isolated incognito-like profile inside it (cheap)
- **Page** — a single tab
- **Frame** — an iframe within a page
- **Locator** — a lazy description of an element

### PW6. What is a BrowserContext? 🔴 **P0**
An isolated browser session within a single browser process — its own cookies, localStorage, cache and permissions. **Why it matters:** creating one takes milliseconds, whereas launching a browser takes seconds. Playwright gives each test its own context, so you get complete isolation at almost no cost.
> **The trap:** *"How is this different from a new Selenium driver?"* → A new WebDriver session launches an entire browser process. A BrowserContext reuses the running browser. Seconds versus milliseconds — that's the bulk of Playwright's speed advantage.

### PW7. What is a Locator? 🔴 **P0**
A **lazy** description of how to find an element — not a reference to a DOM node. It's resolved fresh at the moment of each action.
```ts
const price = page.getByTestId('on-road-price');  // nothing has been searched for yet
await expect(price).toBeVisible();                 // resolved here
await expect(price).toContainText('₹');            // resolved AGAIN here
```
> **The key consequence:** **there is no `StaleElementReferenceException` in Playwright**, because there is nothing cached to go stale. Contrast this with Q59.

**Recommended locators, in priority order** (user-facing first):
```ts
page.getByRole('button', { name: 'Book Test Drive' })  // 1. accessibility role — most robust
page.getByLabel('Registration State')                  // 2. form label
page.getByPlaceholder('Enter PIN code')                // 3.
page.getByText('Exchange Bonus')                       // 4.
page.getByTestId('on-road-price')                       // 5. data-testid — my default for non-semantic elements
page.locator('css=.swatch[data-colour="red"]')          // 6. CSS/XPath — last resort
```

### PW8. How is auto-waiting implemented? 🔴 **P0**
Before any action, Playwright runs **actionability checks** and retries until they all pass or the timeout expires:

| Check | Meaning |
|---|---|
| Attached | Present in the DOM |
| Visible | Non-empty bounding box, not `visibility:hidden` |
| Stable | Bounding box unchanged for two animation frames — i.e. not mid-animation |
| Enabled | Not `disabled` |
| Receives events | Actually the element at that point — nothing covering it |
| Editable | For `fill()` — not readonly |

> **Say this:** *"'Stable' and 'receives events' are the two Selenium doesn't have any equivalent for. 'Stable' waits out CSS animations; 'receives events' catches the sticky-header-covering-the-button problem that I described in Q55. Those two checks are why most of our timing flakiness disappeared."*

### PW9. What is the role of `expect`? 🟠 **P1**
Playwright's assertion library, and the crucial property is that **web-first assertions auto-retry** until the timeout.
```ts
await expect(page.getByTestId('price')).toHaveText('₹12,08,900');  // retries for up to 5s
// vs a non-retrying assertion:
expect(await page.getByTestId('price').textContent()).toBe('₹12,08,900');  // one shot — flaky
```
> **The trap:** *"Which is better?"* → The first. `await expect(locator)` polls; the second reads once and fails immediately if the async update hasn't landed. **The `await` goes before `expect`, not inside it** — that placement is the whole difference.

### PW10. Page vs Context 🟠 **P1**
A **Page** is one tab. A **Context** is an isolated session that can contain many pages. Two pages in the same context share cookies and storage (same user, two tabs). Two pages in different contexts share nothing (two different users) — which is how you test a dealer and a customer simultaneously in one test.

### PW11. How do you handle a browser? 🟡 **P2**
In tests you normally don't — the `browser`, `context` and `page` fixtures are provided. Manual control when needed:
```ts
const browser = await chromium.launch({ headless: false, slowMo: 100 });
const context = await browser.newContext({ viewport: { width: 1440, height: 900 } });
const page = await context.newPage();
await context.close();   // closing the context is enough — cheaper than closing the browser
await browser.close();
```

### PW12. Use of headless mode 🟡 **P2**
Runs without a visible UI — faster, lower memory, and required on CI agents with no display. Headed locally for debugging, headless in CI:
```ts
use: { headless: !!process.env.CI }
```
> **Better than headed debugging:** `npx playwright test --ui` opens **UI mode**, with time-travel through each step. It's the single most useful debugging tool in Playwright.

### PW13. How do you take a screenshot? 🟠 **P1**
```ts
await page.screenshot({ path: 'page.png', fullPage: true });        // whole scrollable page
await page.getByTestId('price-panel').screenshot({ path: 'p.png' }); // one element
// Automatic on failure, via config:
use: { screenshot: 'only-on-failure' }
```

### PW14. How do you record video? 🟡 **P2**
```ts
use: { video: 'retain-on-failure' }   // 'on', 'off', 'retain-on-failure', 'on-first-retry'
```
`retain-on-failure` records everything but discards videos for passing tests — full diagnostics with no storage cost for the 95% that pass.

### PW15. How do you handle multiple tabs? 🔴 **P0**
```ts
// Wait for the new page event and the click CONCURRENTLY — set up the listener BEFORE the click,
// otherwise the event fires before you're listening and the wait hangs.
const [newTab] = await Promise.all([
  context.waitForEvent('page'),                          // listener first
  page.getByRole('link', { name: 'View Brochure' }).click(),
]);
await newTab.waitForLoadState();
await expect(newTab).toHaveTitle(/Brochure/);
await newTab.close();
```
> Compare Q48: no window handles, no switching, no risk of the driver being focused on a closed window.

### PW16. How do you handle popups? 🟠 **P1**
```ts
// Native JS dialogs: register a handler BEFORE the action that triggers them
page.on('dialog', async dialog => {
  console.log(dialog.message());
  await dialog.accept();          // or dialog.dismiss()
});
// If you register NO handler, Playwright auto-dismisses dialogs — a common surprise.
```
HTML modals are just elements: `await page.getByRole('dialog').getByRole('button', { name: 'Confirm' }).click();`

### PW17. How do you handle frames? 🔴 **P0**
```ts
await page.frameLocator('iframe.payment')
          .getByLabel('Card number')
          .fill('4111111111111111');

// Nested — just chain, no context to restore
await page.frameLocator('#outer').frameLocator('#inner').getByLabel('CVV').fill('123');
```
> **Say this:** *"No `switchTo()`, no `defaultContent()`, no try-finally to restore context. The whole class of stuck-in-a-frame bugs from Q47 doesn't exist."*

### PW18. How do you run tests in parallel? 🔴 **P0**
```ts
fullyParallel: true,                      // parallelise test FILES and tests within them
workers: process.env.CI ? 4 : undefined,  // undefined = half the CPU cores
```
Each worker is a separate process with its own browser. `test.describe.serial()` forces a group to run in order; `--shard=1/3` splits a suite across three CI machines.

### PW19. How do you configure retries? 🟠 **P1**
```ts
retries: process.env.CI ? 1 : 0,   // retry in CI only; never locally, so flakiness stays visible
trace: 'on-first-retry',           // capture a full trace exactly when it's needed
```
> Same principle as Q66: retries absorb infrastructure blips, not product bugs. Playwright reports retried tests as **"flaky"** rather than "passed", which is better than TestNG's default — the flakiness stays visible.

### PW20. How do you capture an API response? 🟠 **P1**
```ts
// Listener BEFORE the action, same pattern as new tabs
const [response] = await Promise.all([
  page.waitForResponse(r => r.url().includes('/pricing/on-road') && r.status() === 200),
  page.getByRole('combobox', { name: 'Variant' }).selectOption('VX'),
]);
const body = await response.json();
expect(body.onRoadPrice).toBeGreaterThan(0);
// Now assert the UI shows what the API returned — cross-layer validation
```

### PW21. How do you mock APIs? 🔴 **P0**
```ts
// Force an error the real service won't produce on demand
await page.route('**/api/v1/pricing/**', route =>
  route.fulfill({ status: 500, body: JSON.stringify({ error: 'unavailable' }) })
);

// Modify a real response
await page.route('**/api/v1/inventory', async route => {
  const res = await route.fetch();
  const json = await res.json();
  json.stock = 0;                                    // force out-of-stock
  await route.fulfill({ response: res, json });
});

await page.route('**/*.{png,jpg}', route => route.abort());   // block images to speed up runs
```
> **Say this:** *"This is the capability with no Selenium equivalent. Error-path coverage went from near zero to properly tested — see Q88 for the defect it found."*

### PW22. How do you handle authentication? 🔴 **P0**
```ts
// auth.setup.ts — runs ONCE, saves the session to disk
test('authenticate', async ({ page }) => {
  await page.goto('/login');
  await page.getByLabel('Username').fill(process.env.USER!);
  await page.getByLabel('Password').fill(process.env.PASS!);
  await page.getByRole('button', { name: 'Sign in' }).click();
  await expect(page.getByTestId('dealer-name')).toBeVisible();   // wait for login to COMPLETE before saving
  await page.context().storageState({ path: 'auth/state.json' });
});
```
```ts
// playwright.config.ts — every test starts already logged in
projects: [
  { name: 'setup', testMatch: /auth\.setup\.ts/ },
  { name: 'chromium', use: { storageState: 'auth/state.json' }, dependencies: ['setup'] },
]
```
> **The payoff:** removed a 4-second login from every test. On 200 tests that's over 13 minutes saved per run.

### PW23. How do you integrate with CI/CD? 🟠 **P1**
```yaml
- uses: actions/setup-node@v4
- run: npm ci
- run: npx playwright install --with-deps chromium   # installs browsers AND OS dependencies
- run: npx playwright test --shard=${{ matrix.shard }}/3
- uses: actions/upload-artifact@v4
  with: { name: report, path: playwright-report/ }
```
> Use the official `mcr.microsoft.com/playwright` Docker image to pin browser versions — otherwise a browser auto-update can change behaviour between runs.

### PW24. How do you debug tests? 🔴 **P0**
| Tool | Command | Use |
|---|---|---|
| **UI Mode** | `npx playwright test --ui` | **Best option** — time-travel, watch mode, live locator picker |
| **Trace Viewer** | `npx playwright show-trace trace.zip` | Post-mortem: DOM snapshot per step, network, console |
| Inspector | `npx playwright test --debug` | Step through with a pause |
| `page.pause()` | in code | Breakpoint that opens the Inspector |
| Codegen | `npx playwright codegen <url>` | Records actions into code |

> **Trace Viewer is the answer to give.** It captures a DOM snapshot at **every step** plus network and console. Diagnosing an overnight CI failure went from twenty minutes to two, because you can see the page state at the exact failing action instead of inferring it from one screenshot.

### PW25. How do you generate a test report? 🟠 **P1**
```ts
reporter: [
  ['html', { open: 'never' }],                    // rich HTML with traces and videos embedded
  ['junit', { outputFile: 'results.xml' }],       // for CI dashboards
  ['list'],                                       // console output
],
```
The built-in HTML reporter embeds traces, screenshots and videos — so unlike Extent Reports (Q72) there's no separate listener code to write.

---

## 12.2 — Automation Strategies and Scenarios (Q26–Q40)

### PW26. Page Object Model in Playwright 🔴 **P0**
```ts
export class ConfiguratorPage {
  // Locators as readonly fields, assigned in the constructor — lazy, so no staleness
  readonly variantSelect = this.page.getByRole('combobox', { name: 'Variant' });
  readonly onRoadPrice   = this.page.getByTestId('on-road-price');

  constructor(private readonly page: Page) {}

  async goto()                     { await this.page.goto('/configurator'); }
  async selectVariant(v: string)   { await this.variantSelect.selectOption(v); }
  async getPrice(): Promise<number> {
    const t = await this.onRoadPrice.textContent();
    return Number(t!.replace(/[^0-9.]/g, ''));
  }
}
```
> **Playwright-specific refinements worth saying:** (1) **Expose locators, not just methods** — a test can then write its own `expect()` on them, which keeps assertions in the test layer. (2) Inject page objects via **fixtures** rather than `new`-ing them in every test (see Q13 in Part 2). (3) No `BasePage` needed for waits, because auto-waiting is built in — the wrapper layer that `BasePage` exists for in Selenium is largely unnecessary.

### PW27. How do you wait in Playwright? 🔴 **P0**
```ts
// ✅ Preferred: auto-waiting + retrying assertions. Usually you write NO explicit wait.
await page.getByRole('button', { name: 'Proceed' }).click();
await expect(page.getByTestId('price')).toHaveText('₹12,08,900');

// ✅ When you need an explicit condition
await page.waitForURL('**/booking/confirm');
await page.waitForResponse(r => r.url().includes('/pricing'));
await expect(page.getByTestId('loader')).toBeHidden();
await page.waitForFunction(() => document.readyState === 'complete');

// ❌ Never
await page.waitForTimeout(3000);   // Playwright's Thread.sleep — banned for the same reasons (Q43)
```

### PW28. File upload 🟡 **P2**
```ts
await page.getByLabel('Upload RC').setInputFiles('test-data/rc.pdf');
await page.getByLabel('Docs').setInputFiles(['a.pdf', 'b.pdf']);   // multiple
await page.getByLabel('Upload RC').setInputFiles([]);               // clear

// No file input? Handle the chooser event — no Robot class needed (contrast Q61)
const [chooser] = await Promise.all([
  page.waitForEvent('filechooser'),
  page.getByText('Drag files here').click(),
]);
await chooser.setFiles('test-data/rc.pdf');
```

### PW29. Scrolling 🔵 **P3**
Usually unnecessary — Playwright auto-scrolls before acting. When you need it: `await locator.scrollIntoViewIfNeeded()` or `await page.mouse.wheel(0, 500)`.

### PW30. Alerts 🟠 **P1** → same as **PW16**.

### PW31. Drag and drop 🟡 **P2**
```ts
await page.getByTestId('accessory-1').dragTo(page.getByTestId('selected-zone'));
// HTML5 drag that dragTo doesn't handle — do it manually
await source.hover();  await page.mouse.down();
await target.hover();  await page.mouse.up();
```

### PW32. Network failures 🟠 **P1**
```ts
await page.route('**/api/pricing**', route => route.abort('failed'));       // network error
await page.route('**/api/pricing**', route => route.fulfill({ status: 503 })); // server error
await context.setOffline(true);                                              // fully offline
```
Then assert graceful degradation — an error message, not a blank price. See PW41 for slow-network simulation.

### PW33. Mobile devices 🟡 **P2**
```ts
projects: [{ name: 'mobile', use: { ...devices['iPhone 14'] } }]
```
> **Important honesty point:** this is **emulation** — viewport, user agent, touch events and device scale factor. It is **not** a real device and **not** native app testing. For a real automotive app you'd still need Appium or a device cloud. Saying this unprompted shows you understand the limitation.

### PW34. Login functionality 🟠 **P1**
Test the login flow itself explicitly (valid, invalid, locked, empty — see Q80 for the full scenario list), then use `storageState` (PW22) for every *other* test so they don't re-test login 200 times.

### PW35. Cookies 🟡 **P2**
```ts
await context.addCookies([{ name: 'consent', value: 'yes', domain: 'qa.autoconnect.com', path: '/' }]);
const cookies = await context.cookies();
await context.clearCookies();
```
Useful for skipping a cookie banner on every test — faster and less brittle than clicking it.

### PW36. What is Trace Viewer? 🔴 **P0**
An interactive post-mortem recording of a test run: a timeline of every action with a **DOM snapshot before and after each**, plus network requests, console logs, and the source line. Open with `npx playwright show-trace trace.zip`.
> **Say this:** *"It's the single biggest debugging improvement over Selenium. A Selenium failure gives you one screenshot at the moment of failure; a trace lets you step backwards through the page state to see what actually went wrong. That's the difference between guessing and knowing."*

### PW37. How do you generate tests? 🟡 **P2**
`npx playwright codegen https://qa.autoconnect.com` records your clicks into runnable code with sensible locator suggestions.
> **The caveat to state:** codegen output is a *starting point*, not production code. It produces no page objects, weak assertions and sometimes brittle locators. I use it to discover good locators quickly, then restructure by hand.

### PW38. Visual testing 🟠 **P1**
```ts
await expect(page).toHaveScreenshot('configurator.png', {
  maxDiffPixelRatio: 0.01,                          // tolerance for anti-aliasing differences
  mask: [page.getByTestId('timestamp')],            // hide volatile regions
});
await expect(page.getByTestId('colour-swatches')).toHaveScreenshot('swatches.png');
```
First run creates the baseline; later runs diff against it. `--update-snapshots` refreshes it.
> **Say this:** *"Genuinely useful for our colour swatches and price panel, where a CSS regression is invisible to functional assertions. But baselines are OS- and browser-specific, so they must be generated in the same Docker image CI uses — otherwise font rendering differences fail every test. That's the practical gotcha."*

### PW39. File download 🟡 **P2**
```ts
const [download] = await Promise.all([
  page.waitForEvent('download'),
  page.getByRole('link', { name: 'Download Brochure' }).click(),
]);
expect(download.suggestedFilename()).toBe('vitara-brochure.pdf');
await download.saveAs('./downloads/brochure.pdf');
```
No browser preference configuration needed — contrast Q61.

### PW40. WebSockets 🔵 **P3**
```ts
page.on('websocket', ws => {
  ws.on('framereceived', f => console.log('received:', f.payload));
});
```
Relevant for real-time features — live inventory updates, or delivery tracking pushed to the customer.

---

## 12.3 — Advanced Performance and Maintenance (Q41–Q50)

### PW41. Slow network 🟠 **P1**
```ts
// Add a fixed delay to matching requests
await page.route('**/api/**', async route => {
  await new Promise(r => setTimeout(r, 3000));
  await route.continue();
});

// Or throttle properly via CDP (Chromium only)
const cdp = await context.newCDPSession(page);
await cdp.send('Network.emulateNetworkConditions', {
  offline: false, downloadThroughput: 50_000, uploadThroughput: 20_000, latency: 500,
});
```
> **Why this matters in our domain:** dealers in tier-3 cities operate on poor connectivity. Testing that the configurator shows a loading state rather than a blank price on a slow link is a real requirement, not a theoretical one.

### PW42. Accessibility 🟠 **P1**
```ts
import AxeBuilder from '@axe-core/playwright';

const results = await new AxeBuilder({ page }).withTags(['wcag2a', 'wcag2aa']).analyze();
expect(results.violations).toEqual([]);
```
> **Say this:** *"And Playwright's `getByRole`/`getByLabel` locators push you toward accessibility naturally — if you can't locate an element by its role or label, that's usually itself an accessibility defect. Our colour-swatch picker failed contrast checks, which was a real finding on a feature entirely about colour (see Q122)."*

### PW43. Sessions and storage 🟡 **P2**
`storageState` (PW22) covers cookies plus localStorage. Direct access:
```ts
await page.evaluate(() => localStorage.setItem('savedConfig', JSON.stringify({ variant: 'VX' })));
const value = await page.evaluate(() => localStorage.getItem('savedConfig'));
```

### PW44. Dynamic content 🟠 **P1**
Largely solved by auto-waiting plus retrying assertions. Specific tools:
```ts
await expect(page.getByTestId('price')).not.toHaveText(oldPrice);   // wait for a CHANGE
await expect(page.getByRole('listitem')).toHaveCount(7);            // wait for a count
await expect(page.getByTestId('loader')).toBeHidden();              // wait for a spinner to clear
```
> The dynamic-attribute problem from Q42 is the same in both tools — the answer is still a stable `data-testid`.

### PW45. Different browsers 🟠 **P1**
```ts
projects: [
  { name: 'chromium', use: { ...devices['Desktop Chrome'] } },
  { name: 'firefox',  use: { ...devices['Desktop Firefox'] } },
  { name: 'webkit',   use: { ...devices['Desktop Safari'] } },
]
```
`npx playwright test --project=webkit` to run one.
> **The honest caveat:** these are the **bundled** engines, not the branded browsers. WebKit is not Safari, and Chromium is not Chrome — so a Safari-specific rendering bug can be missed. For true branded coverage you use `channel: 'chrome'` or a device cloud. Volunteering this shows you understand what the tool actually guarantees.

### PW46. How do you structure a Playwright project? 🔴 **P0**
→ **Full folder tree and config are at Q13 in Part 2.** The three design decisions to name: **fixtures** for dependency injection instead of `beforeEach`; **`storageState` + a setup project** for one-time login; **`trace: 'on-first-retry'`** for cheap-but-complete diagnostics.

### PW47. Performance testing 🟡 **P2**
```ts
// Core Web Vitals / navigation timing from the browser itself
const metrics = await page.evaluate(() => JSON.stringify(performance.getEntriesByType('navigation')));
```
> **State the boundary clearly:** *"Playwright measures **front-end** performance for a single user — page load, Core Web Vitals, render timing. It is not a load-testing tool; it can't simulate a thousand concurrent users. For the festive-campaign load testing in Q109 you need JMeter, k6 or Gatling. Conflating the two is a real mistake, because a page that loads in 800ms for one user can collapse at 500 concurrent users."*

### PW48. Flaky tests 🔴 **P0**
→ **Full answer at Q134.** Playwright-specific additions: retries report as **"flaky"** rather than green, so flakiness stays visible; `trace: 'on-first-retry'` gives you the diagnostic automatically; and `--repeat-each=20` reproduces intermittency on demand, which is how you confirm a fix rather than hope.

### PW49. Different environments 🟠 **P1**
```ts
// playwright.config.ts
use: { baseURL: process.env.BASE_URL ?? 'https://qa.autoconnect.com' }
```
```bash
BASE_URL=https://uat.autoconnect.com npx playwright test
```
Use `dotenv` for local `.env` files, and CI secrets for credentials — never committed. Same principle as `ConfigReader` in Q9.

### PW50. How do you keep tests stable? 🔴 **P0**
→ **Q134 and Q48 above.** The Playwright-specific summary: user-facing locators (`getByRole` over CSS), lean on auto-waiting rather than adding manual waits, `expect` for its auto-retry, full isolation via BrowserContext per test, no `waitForTimeout`, mock third-party dependencies so someone else's sandbox can't make your suite red, and investigate anything reported flaky rather than accepting the retry.


---
---

# Part 13 — Appendix

## 13.1 Rapid-fire one-liners

Read this the morning of the interview. If any answer here surprises you, go back to the full section.

| Question | One-line answer |
|---|---|
| findElement vs findElements | Single element, throws vs List, returns empty |
| Implicit vs Explicit | Global, presence only vs local, any condition. **Never mix them** |
| Thread.sleep | Banned. Blind fixed pause |
| close vs quit | Current window vs all windows + ends session. **Teardown = quit** |
| Absolute vs relative XPath | `/html/body/...` (brittle) vs `//tag[@attr]` (stable) |
| `text()` vs `normalize-space()` | `normalize-space()` collapses whitespace — always prefer it |
| XPath indexing | 1-based; Java lists are 0-based. `(//div)[7]` needs the brackets |
| Select class limit | Only works on a real `<select>` tag |
| Alert vs modal | `switchTo().alert()` is JS dialogs only; HTML modals are elements |
| Stale element | DOM re-rendered. Fix: re-locate, don't cache |
| Frames | Must `switchTo()`. `parentFrame()` = up one; `defaultContent()` = all the way out |
| Actions class | Needs `.perform()` or nothing happens |
| String immutability | Any "change" creates a new object |
| StringBuilder vs Buffer | Buffer is synchronised (thread-safe), Builder is faster |
| `==` vs `.equals()` | Reference vs content. **Always `.equals()` for Strings** |
| HashMap vs HashTable | No locking + allows one null key vs fully synchronised + no nulls |
| Overload vs override | Compile-time, different params vs runtime, same signature |
| Return type only differs | **Not overloading** — compile error |
| Abstract class vs interface | Shared code + state vs a capability contract |
| Static method override | Impossible — that's method *hiding* |
| `finally` doesn't run when | `System.exit()`, JVM crash, thread killed, infinite loop |
| Checked vs unchecked | Compiler-enforced (IOException) vs runtime bugs (NPE) |
| Comparable vs Comparator | One natural order inside vs many orders outside |
| ArrayList vs LinkedList | O(1) access vs O(1) insert. **ArrayList 95% of the time** |
| Why WebDriver isn't static | Breaks parallel runs. Use `ThreadLocal` |
| `alwaysRun = true` | So teardown runs even if setup failed — prevents leaked browsers |
| priority vs dependsOnMethods | Ordering only vs real dependency (child is **skipped**) |
| DataProvider vs Parameters | Many data rows vs one config value from XML |
| SoftAssert gotcha | **Forget `assertAll()` and the test passes silently** |
| Surefire vs Failsafe | `test` phase, fails immediately vs `integration-test`, defers to `verify` |
| mvn package vs install | JAR in /target vs also copied to `~/.m2` |
| 401 vs 403 | Not authenticated vs authenticated but not permitted |
| 400 vs 422 | Malformed vs valid syntax, invalid semantics |
| PUT vs PATCH | Full replace (omitted fields wiped) vs partial update |
| Idempotent | Same result N times. GET/PUT/DELETE yes, **POST no** |
| 201 vs 200 | Created (should include `Location` header) vs OK |
| Basic auth security | Base64 is **encoding**, not encryption |
| TRACE returning 200 | A security finding — enables XST. Should be 405 |
| RANK vs DENSE_RANK | 1,1,3 (gap) vs 1,1,2 (no gap). **DENSE_RANK for Nth highest** |
| WHERE vs HAVING | Rows before grouping vs groups after. Aggregates only in HAVING |
| SQL execution order | FROM→JOIN→WHERE→GROUP BY→HAVING→SELECT→ORDER BY→LIMIT |
| DELETE vs TRUNCATE | DML, rollback-able, has WHERE vs DDL, fast, resets auto-increment |
| `= NULL` | Always returns nothing. Use `IS NULL` |
| PK vs FK | One per table, never null vs many, nullable, references a PK |
| LEFT JOIN + WHERE trap | A right-table condition in WHERE turns it into an INNER JOIN |
| Smoke vs Sanity | Wide + shallow (is the build testable?) vs narrow + deep (does the change work?) |
| Regression vs Retest | Did anything else break? vs is this defect fixed? **Retest first** |
| Verification vs Validation | Building it right (reviews) vs building the right thing (execution) |
| BVA vs ECP | Values at the boundaries vs one value per equivalence class |
| Pairwise | Covers all value *pairs* — most defects come from 1 or 2 parameters |
| Test Plan vs Strategy | Per-project, specific vs organisational, long-lived |
| Story point | **Relative** effort, not hours. Fibonacci. 13+ → split the story |
| Scrum vs Kanban | Timeboxed sprints + commitment vs continuous flow + **WIP limits** |
| Ready vs Done | Entry gate for a sprint vs exit gate for a story |
| Playwright auto-wait | Attached, visible, **stable**, enabled, receives events, editable |
| Playwright locator | **Lazy** — resolved at action time. No stale-element exception |
| BrowserContext | Isolated session in a running browser. Milliseconds, not seconds |
| Playwright `expect` | `await expect(locator)` **auto-retries**. Put `await` before `expect` |
| Playwright frames | `frameLocator()` — no switching, no context to restore |
| Trace Viewer | DOM snapshot per step. The biggest debugging win over Selenium |
| Playwright mobile | **Emulation only** — not a real device, not native apps |
| Playwright performance | Front-end, single user. **Not** a load-testing tool |

---

## 13.2 Code bank — where to find each program

| Program | Question |
|---|---|
| Reverse a string (4 ways) | Q30 |
| Duplicates in an array (Set / Map / brute force) | Q31 |
| Duplicates using Streams | Q32 |
| Palindrome (string + number) | Q33 |
| Separate characters and digits | Q34 |
| Character frequency count | Q35 |
| Second highest element | Q36 |
| Excel read with Apache POI + DataProvider | Q37 |
| Properties file reader | Q38 |
| Swap without a third variable | Q39 |
| Broken links checker | Q52 |
| Print link titles / open each in a tab | Q53 |
| Amazon search + scroll + 7th element XPath | Q56 |
| Mobile number validation with regex | Q57 |
| DriverFactory with ThreadLocal | Q9 |
| ConfigReader Singleton | Q9 |
| BasePage with wrapped waits | Q11 |
| BaseTest lifecycle | Q11 |
| Page object (POM) | Q10 |
| ITestListener — screenshot on failure | Q60 |
| IRetryAnalyzer + IAnnotationTransformer | Q66 |
| REST Assured full CRUD suite | Q87 |
| JSON schema validation | Q81 |
| Auth token caching | Q82 |
| Jenkins pipeline | Q73 |
| pom.xml (complete) | Q68 |
| testng.xml (complete) | Q63 |
| playwright.config.ts | Q13 |
| Playwright fixtures | Q13 |
| Playwright API + UI hybrid test | Q88 |
| Playwright network mocking | Q88, PW21 |
| SQL: second highest salary (4 ways) | Q91 |
| SQL: all joins + anti-join | Q92 |
| SQL: find and remove duplicates | Q93 |
| SQL: GROUP BY + HAVING | Q94 |

---

## 13.3 Three-day revision plan

### Day 1 — Foundation (the make-or-break material)
**Morning.** Fill in your real details in the Project Baseline table. Then rehearse **out loud, timed**: Q1 (self-intro), Q2 (project), Q3 (responsibilities). Record yourself once — you'll immediately hear the rambling.
**Afternoon.** Q6 framework architecture. Draw the folder tree from memory on paper, then deliver **layers, then flow** out loud until you can do it in 2.5 minutes without notes. Then Q7, Q8, Q9, Q10, Q12.
**Evening.** Part 3 Java theory — Q15 to Q20 (String, HashMap, OOP, overloading, abstract vs interface, exceptions).

### Day 2 — Technical depth
**Morning.** Part 4 coding. **Type each program by hand** — don't read them. Reverse string, duplicates, palindrome, separate chars/digits, Excel reader. Typing builds the muscle memory that reading doesn't.
**Afternoon.** Part 5 Selenium. Priority order: Q43 waits, Q45 dropdowns, Q47 frames, Q48 windows, Q42 dynamic elements, Q60 screenshots, Q52 broken links, Q40 findElement.
**Evening.** Part 6 TestNG/Maven — Q63 testng.xml, Q66 failed tests, Q68 pom.xml, Q69 commands. Then Part 8 SQL — all six, they're quick.

### Day 3 — Breadth and polish
**Morning.** Part 7 API — Q77 to Q82, Q87. Plus Q85 (the slow-GET trap question) because it's a differentiator.
**Afternoon.** Part 9 manual/STLC — Q100 test cases, Q101 plan vs strategy, Q102 smoke vs sanity, Q103 regression vs retest, Q104 techniques, Q118 when to stop, Q119 unclear requirements. Then Part 10 Agile (all seven — they're fast).
**Evening.** Part 11 scenarios. Rehearse **Q131 (your challenging bug)** out loud until it flows — it's the highest-value story you'll tell. Then Q128, Q129, Q130. Skim Part 12 Playwright, focusing on the 🔴 items.

### Morning of the interview
Read **13.1 rapid-fire** only. Say Q1 out loud once. Nothing else — cramming new material raises anxiety and displaces what you already know.

---

## 13.4 Do and don't

**Do**
- Bring every theory answer back to your project: *"…and in AutoConnect we hit this when…"*
- Use the Rule of 3 — three points, then stop
- Say "I don't know, but my understanding is X — is that the right direction?" once or twice
- Narrate your logic while coding, even when stuck
- Ask about constraints before coding: null handling, case sensitivity, expected input
- State complexity out loud: "this is O(n) with O(n) space"
- Volunteer limitations — POM's downsides, Playwright's emulation-only mobile, your own contribution boundaries
- Have two questions ready for them: about the team's automation maturity, or how QA is involved in design

**Don't**
- Name a tool on your resume you can't defend for three follow-ups
- Say "we automate everything" or "we have 100% coverage"
- Claim you architected a framework alone at two years' experience
- Recite a definition with no project example
- Keep talking after you've answered — land the plane
- Say "POM framework" — POM is a pattern, not a framework type
- Blame your current employer or team
- Guess silently on an ambiguous coding question — ask
- Give a bare number for the estimation question (Q74) — show the arithmetic

---

## 13.5 The five answers that decide the interview

If preparation time collapses, these five carry the most weight:

| # | Question | Why it decides things |
|---|---|---|
| **1** | **Q1 — Tell me about yourself** | Sets the difficulty of every question that follows |
| **2** | **Q6 — Framework architecture** | Appeared 4× across your sources. Deliver *layers, then flow* |
| **3** | **Q131 — Challenging bug** | The only question where you demonstrate real investigative skill |
| **4** | **Q43 — Waits** | The most-asked Selenium question. Add "never mix implicit and explicit" |
| **5** | **Q30/Q31 — Reverse string / find duplicates** | You will be asked to type one of these live |

---

**Total: 156 questions across 13 parts.** Replace every placeholder with your real project details before you rehearse — a well-delivered answer about a project you can't defend is worse than a hesitant answer about one you can.

Good luck.
