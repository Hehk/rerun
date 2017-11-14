let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div>
      <div className="w-100 w-70-l ph3 ph0-l center flex items-center justify-between pv3">
        <a className="f2 no-underline black" href="/">
          (ReasonReact.stringToElement("ReRun"))
        </a>
        <div className="flex">
          <div className="ml4 b">(ReasonReact.stringToElement("Summary"))</div>
          <div className="ml4 b">(ReasonReact.stringToElement("Runs"))</div>
          <div className="ml4 b">(ReasonReact.stringToElement("About"))</div>
        </div>
      </div>
      <p className="App-intro">
        (ReasonReact.stringToElement("To get started, edit"))
        <code> (ReasonReact.stringToElement(" src/App.re ")) </code>
        (ReasonReact.stringToElement("and save to reload."))
      </p>
    </div>
};
